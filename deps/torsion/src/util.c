/*!
 * util.c - utils for libtorsion
 * Copyright (c) 2020, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/libtorsion
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#ifdef _WIN32
#  include <windows.h> /* SecureZeroMemory */
#endif
#include <torsion/util.h>
#include "bio.h"
#include "internal.h"

/*
 * Memory Zero
 *
 * Resources:
 *   http://www.daemonology.net/blog/2014-09-04-how-to-zero-a-buffer.html
 *   https://github.com/jedisct1/libsodium/blob/3b26a5c/src/libsodium/sodium/utils.c#L112
 *   https://github.com/torvalds/linux/blob/37d4e84/include/linux/string.h#L233
 *   https://github.com/torvalds/linux/blob/37d4e84/include/linux/compiler-gcc.h#L21
 */

void
torsion_memzero(void *ptr, size_t len) {
#if defined(_WIN32) && defined(SecureZeroMemory)
  if (len > 0)
    SecureZeroMemory(ptr, len);
#elif defined(TORSION_HAVE_ASM)
  if (len > 0) {
    memset(ptr, 0, len);

    __asm__ __volatile__ (
      ""
      :: "r" (ptr)
      : "memory"
    );
  }
#else
  static void *(*volatile memset_ptr)(void *, int, size_t) = memset;

  if (len > 0)
    memset_ptr(ptr, 0, len);
#endif
}

/*
 * Memory Compare
 */

int
torsion_memcmp(const void *x, const void *y, size_t n) {
  const unsigned char *xp = (const unsigned char *)x;
  const unsigned char *yp = (const unsigned char *)y;
  uint32_t eq = 1;
  uint32_t lt = 0;
  uint32_t a, b;
  size_t i;

  for (i = 0; i < n; i++) {
    a = xp[i];
    b = yp[i];
    lt |= eq & ((a - b) >> 31);
    eq &= ((a ^ b) - 1) >> 31;
  }

  return (1 - 2 * (int)lt) * (1 - (int)eq);
}

int
torsion_memcmp_var(const void *x, const void *y, size_t n) {
  /* Exposing this function is necessary to avoid a
   * particularly nasty GCC bug[1][2]. We could use
   * the constant-time function above for testing,
   * but its behavior is harder to audit/verify.
   *
   * [1] https://gcc.gnu.org/bugzilla/show_bug.cgi?id=95189
   * [2] https://github.com/bitcoin-core/secp256k1/issues/823
   */
  const unsigned char *xp = (const unsigned char *)x;
  const unsigned char *yp = (const unsigned char *)y;
  size_t i;

  for (i = 0; i < n; i++) {
    if (xp[i] != yp[i])
      return (int)xp[i] - (int)yp[i];
  }

  return 0;
}

/*
 * Memory Equal
 */

int
torsion_memequal(const void *x, const void *y, size_t n) {
  const unsigned char *xp = (const unsigned char *)x;
  const unsigned char *yp = (const unsigned char *)y;
  uint32_t z = 0;

  while (n--)
    z |= *xp++ ^ *yp++;

  return (z - 1) >> 31;
}

/*
 * Memory XOR
 */

void
torsion_memxor(void *z, const void *x, size_t n) {
  const unsigned char *xp = (const unsigned char *)x;
  unsigned char *zp = (unsigned char *)z;

  while (n--)
    *zp++ ^= *xp++;
}

void
torsion_memxor3(void *z, const void *x, const void *y, size_t n) {
  const unsigned char *xp = (const unsigned char *)x;
  const unsigned char *yp = (const unsigned char *)y;
  unsigned char *zp = (unsigned char *)z;

  while (n--)
    *zp++ = *xp++ ^ *yp++;
}

/*
 * Murmur3
 *
 * Resources:
 *   https://en.wikipedia.org/wiki/MurmurHash
 *   https://github.com/aappleby/smhasher
 */

uint32_t
murmur3_sum(const unsigned char *data, size_t len, uint32_t seed) {
  uint32_t h1 = seed;
  uint32_t c1 = UINT32_C(0xcc9e2d51);
  uint32_t c2 = UINT32_C(0x1b873593);
  uint32_t k1 = 0;
  size_t left = len;

#define ROTL32(w, b) ((w) << (b)) | ((w) >> (32 - (b)))

  while (left >= 4) {
    k1 = read32le(data);

    k1 *= c1;
    k1 = ROTL32(k1, 15);
    k1 *= c2;

    h1 ^= k1;
    h1 = ROTL32(h1, 13);
    h1 = h1 * 5 + UINT32_C(0xe6546b64);

    data += 4;
    left -= 4;
  }

  k1 = 0;

  switch (left) {
    case 3:
      k1 ^= (uint32_t)data[2] << 16;
    case 2:
      k1 ^= (uint32_t)data[1] << 8;
    case 1:
      k1 ^= (uint32_t)data[0] << 0;
      k1 *= c1;
      k1 = ROTL32(k1, 15);
      k1 *= c2;
      h1 ^= k1;
  }

#undef ROTL32

  h1 ^= len;
  h1 ^= h1 >> 16;
  h1 *= UINT32_C(0x85ebca6b);
  h1 ^= h1 >> 13;
  h1 *= UINT32_C(0xc2b2ae35);
  h1 ^= h1 >> 16;

  return h1;
}

uint32_t
murmur3_tweak(const unsigned char *data,
              size_t len, uint32_t n, uint32_t tweak) {
  uint32_t seed = (n * UINT32_C(0xfba4c795)) + tweak;
  return murmur3_sum(data, len, seed);
}
