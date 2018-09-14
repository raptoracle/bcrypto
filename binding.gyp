{
  "variables": {
    "bcrypto_byteorder%":
      "<!(python -c 'from __future__ import print_function; import sys; print(sys.byteorder)')",
  },
  "targets": [{
    "target_name": "bcrypto",
    "sources": [
      "./src/aead/aead.c",
      "./src/aes/aes.c",
      "./src/blake2b/blake2b.c",
      "./src/chacha20/chacha20.c",
      "./src/dsa/dsa.c",
      "./src/ecdsa/ecdsa.c",
      "./src/ed25519/ed25519.c",
      "./src/pbkdf2/pbkdf2.c",
      "./src/poly1305/poly1305.c",
      "./src/random/random.c",
      "./src/rsa/rsa.c",
      "./src/scrypt/insecure_memzero.c",
      "./src/scrypt/sha256.c",
      "./src/scrypt/scrypt.c",
      "./src/sha3/sha3.c",
      "./src/aead.cc",
      "./src/aes.cc",
      "./src/bcrypto.cc",
      "./src/blake2b.cc",
      "./src/chacha20.cc",
      "./src/cipherbase.cc",
      "./src/dsa.cc",
      "./src/dsa_async.cc",
      "./src/ecdsa.cc",
      "./src/ed25519.cc",
      "./src/hash160.cc",
      "./src/hash256.cc",
      "./src/keccak.cc",
      "./src/md5.cc",
      "./src/pbkdf2.cc",
      "./src/pbkdf2_async.cc",
      "./src/poly1305.cc",
      "./src/random.cc",
      "./src/ripemd160.cc",
      "./src/rsa.cc",
      "./src/rsa_async.cc",
      "./src/scrypt.cc",
      "./src/scrypt_async.cc",
      "./src/sha1.cc",
      "./src/sha224.cc",
      "./src/sha256.cc",
      "./src/sha384.cc",
      "./src/sha512.cc"
    ],
    "cflags": [
      "-Wall",
      "-Wno-implicit-fallthrough",
      "-Wno-uninitialized",
      "-Wno-unused-function",
      "-Wextra",
      "-O3"
    ],
    "cflags_c": [
      "-std=c99",
      "-Wno-unused-parameter"
    ],
    "cflags_cc+": [
      "-std=c++0x",
      "-Wno-maybe-uninitialized",
      "-Wno-cast-function-type",
      "-Wno-unused-parameter",
      "-Wno-unknown-warning-option"
    ],
    "include_dirs": [
      "<!(node -e \"require('nan')\")"
    ],
    "variables": {
      "conditions": [
        ["OS!='win'", {
          "cc": "<!(echo $CC)"
        }],
        ["OS=='win'", {
          "conditions": [
            ["target_arch=='ia32'", {
              "openssl_root%": "C:/OpenSSL-Win32"
            }, {
              "openssl_root%": "C:/OpenSSL-Win64"
            }]
          ]
        }]
      ]
    },
    "conditions": [
      ["target_arch=='x64' and OS!='win' and cc=='clang'", {
        "cflags": [
          "-msse4.1"
        ]
      }],
      ["bcrypto_byteorder=='little'", {
        "defines": [
          "BCRYPTO_LITTLE_ENDIAN"
        ]
      }, {
        "defines": [
          "BCRYPTO_BIG_ENDIAN"
        ]
      }],
      ["target_arch=='x64' and OS!='win'", {
        "defines": [
          "BCRYPTO_POLY1305_64BIT",
          "BCRYPTO_USE_ASM",
          "BCRYPTO_USE_SSE",
          "BCRYPTO_USE_SSE41"
        ]
      }, {
        "defines": [
          "BCRYPTO_POLY1305_32BIT",
          "ED25519_NO_INLINE_ASM"
        ]
      }],
      ["OS=='win'", {
        "libraries": [
          "-l<(openssl_root)/lib/libeay32.lib"
        ],
        "include_dirs": [
          "<(openssl_root)/include"
        ]
      }, {
        "include_dirs": [
          "<(node_root_dir)/deps/openssl/openssl/include"
        ]
      }]
    ]
  },
  {
    "target_name": "secp256k1",
    "variables": {
      "conditions": [
        [
          "OS=='win'", {
            "with_gmp%": "false"
          }, {
            "with_gmp%": "<!(vendor/secp256k1/utils/has_lib.sh gmpxx && vendor/secp256k1/utils/has_lib.sh gmp)"
          }
        ]
      ]
    },
    "sources": [
      "./vendor/secp256k1/src/addon.cc",
      "./vendor/secp256k1/src/privatekey.cc",
      "./vendor/secp256k1/src/publickey.cc",
      "./vendor/secp256k1/src/signature.cc",
      "./vendor/secp256k1/src/ecdsa.cc",
      "./vendor/secp256k1/src/ecdh.cc",
      "./vendor/secp256k1/src/secp256k1-src/src/secp256k1.c",
      "./vendor/secp256k1/src/secp256k1-src/contrib/lax_der_parsing.c",
      "./vendor/secp256k1/src/secp256k1-src/contrib/lax_der_privatekey_parsing.c"
    ],
    "include_dirs": [
      "/usr/local/include",
      "./vendor/secp256k1/src/secp256k1-src",
      "./vendor/secp256k1/src/secp256k1-src/contrib",
      "./vendor/secp256k1/src/secp256k1-src/include",
      "./vendor/secp256k1/src/secp256k1-src/src",
      "<!(node -e \"require('nan')\")"
    ],
    "defines": [
      "ENABLE_MODULE_RECOVERY=1"
    ],
    "cflags": [
      "-Wall",
      "-Wno-maybe-uninitialized",
      "-Wno-uninitialized",
      "-Wno-unused-function",
      "-Wno-cast-function-type",
      "-Wno-unused-result",
      "-Wno-nonnull-compare",
      "-Wno-unknown-warning-option",
      "-Wextra"
    ],
    "cflags_cc+": [
      "-std=c++0x",
      "-Wno-unused-parameter",
      "-Wno-unused-const-variable",
      "-Wno-unknown-warning-option"
    ],
    "conditions": [
      [
        "with_gmp=='true'", {
          "defines": [
            "HAVE_LIBGMP=1",
            "USE_NUM_GMP=1",
            "USE_FIELD_INV_NUM=1",
            "USE_SCALAR_INV_NUM=1"
          ],
          "libraries": [
            "-lgmpxx",
            "-lgmp"
          ]
        }, {
          "defines": [
            "USE_NUM_NONE=1",
            "USE_FIELD_INV_BUILTIN=1",
            "USE_SCALAR_INV_BUILTIN=1"
          ]
        }
      ],
      [
        "target_arch=='x64' and OS!='win'", {
          "defines": [
            "HAVE___INT128=1",
            "USE_ASM_X86_64=1",
            "USE_FIELD_5X52=1",
            "USE_FIELD_5X52_INT128=1",
            "USE_SCALAR_4X64=1"
          ]
        }, {
          "defines": [
            "USE_FIELD_10X26=1",
            "USE_SCALAR_8X32=1"
          ]
        }
      ],
      [
        "OS=='mac'", {
          "libraries": [
            "-L/usr/local/lib"
          ],
          "xcode_settings": {
            "MACOSX_DEPLOYMENT_TARGET": "10.7",
            "OTHER_CPLUSPLUSFLAGS": [
              "-stdlib=libc++"
            ]
          }
        }
      ]
    ]
  }]
}
