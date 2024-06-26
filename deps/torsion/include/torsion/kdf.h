/*!
 * kdf.h - kdf for libtorsion
 * Copyright (c) 2020, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/libtorsion
 */

#ifndef TORSION_KDF_H
#define TORSION_KDF_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>
#include "common.h"
#include "hash.h"

/*
 * Symbol Aliases
 */

#define bcrypt_generate torsion_bcrypt_generate
#define bcrypt_verify torsion_bcrypt_verify
#define bcrypt_hash torsion_bcrypt_hash
#define bcrypt_check torsion_bcrypt_check
#define bcrypt_pbkdf torsion_bcrypt_pbkdf
#define eb2k_derive torsion_eb2k_derive
#define hkdf_extract torsion_hkdf_extract
#define hkdf_expand torsion_hkdf_expand
#define pbkdf2_derive torsion_pbkdf2_derive
#define pgpdf_derive_simple torsion_pgpdf_derive_simple
#define pgpdf_derive_salted torsion_pgpdf_derive_salted
#define pgpdf_derive_iterated torsion_pgpdf_derive_iterated
#define scrypt_derive torsion_scrypt_derive

/*
 * Bcrypt
 */

TORSION_EXTERN int
bcrypt_generate(char *out,
                const unsigned char *pass,
                size_t pass_len,
                const unsigned char *salt,
                unsigned int rounds,
                char minor);

TORSION_EXTERN int
bcrypt_verify(const unsigned char *pass, size_t pass_len, const char *record);

TORSION_EXTERN int
bcrypt_hash(char *out,
            const char *pass,
            const unsigned char *salt,
            unsigned int rounds,
            char minor);

TORSION_EXTERN int
bcrypt_check(const char *pass, const char *record);

TORSION_EXTERN int
bcrypt_pbkdf(unsigned char *key,
             const unsigned char *pass, size_t pass_len,
             const unsigned char *salt, size_t salt_len,
             unsigned int rounds, size_t size);

/*
 * EB2K (OpenSSL Legacy)
 */

TORSION_EXTERN int
eb2k_derive(unsigned char *key,
            unsigned char *iv,
            hash_id_t type,
            const unsigned char *passwd,
            size_t passwd_len,
            const unsigned char *salt,
            size_t salt_len,
            size_t key_len,
            size_t iv_len);

/*
 * HKDF
 */

TORSION_EXTERN int
hkdf_extract(unsigned char *out, hash_id_t type,
             const unsigned char *ikm, size_t ikm_len,
             const unsigned char *salt, size_t salt_len);

TORSION_EXTERN int
hkdf_expand(unsigned char *out,
            hash_id_t type,
            const unsigned char *prk,
            const unsigned char *info,
            size_t info_len,
            size_t len);

/*
 * PBKDF2
 */

TORSION_EXTERN int
pbkdf2_derive(unsigned char *out,
              hash_id_t type,
              const unsigned char *pass,
              size_t pass_len,
              const unsigned char *salt,
              size_t salt_len,
              uint32_t iter,
              size_t len);

/*
 * PGPDF
 */

TORSION_EXTERN int
pgpdf_derive_simple(unsigned char *out,
                    hash_id_t type,
                    const unsigned char *pass,
                    size_t pass_len,
                    size_t len);

TORSION_EXTERN int
pgpdf_derive_salted(unsigned char *out,
                    hash_id_t type,
                    const unsigned char *pass,
                    size_t pass_len,
                    const unsigned char *salt,
                    size_t salt_len,
                    size_t len);

TORSION_EXTERN int
pgpdf_derive_iterated(unsigned char *out,
                      hash_id_t type,
                      const unsigned char *pass,
                      size_t pass_len,
                      const unsigned char *salt,
                      size_t salt_len,
                      size_t count,
                      size_t len);

/*
 * Scrypt
 */

TORSION_EXTERN int
scrypt_derive(unsigned char *out,
              const unsigned char *pass,
              size_t pass_len,
              const unsigned char *salt,
              size_t salt_len,
              uint64_t N,
              uint32_t r,
              uint32_t p,
              size_t len);

#ifdef __cplusplus
}
#endif

#endif /* TORSION_KDF_H */
