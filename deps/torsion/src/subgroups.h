/*!
 * subgroups.h - torsion subgroups for libtorsion
 * Copyright (c) 2020, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/libtorsion
 */

static const subgroup_def_t subgroups_prime[1] = {
  { {0}, {0}, 1 }
};

static const subgroup_def_t subgroups_x25519[8] = {
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    1
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    {
      0x6b, 0xe4, 0xf4, 0x97, 0xf9, 0xa9, 0xc2, 0xaf,
      0xc2, 0x1f, 0xa7, 0x7a, 0xd7, 0xf4, 0xa6, 0xef,
      0x63, 0x5a, 0x11, 0xc7, 0x28, 0x4a, 0x93, 0x63,
      0xe9, 0xa2, 0x48, 0xef, 0x9c, 0x88, 0x44, 0x15
    },
    0
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    {
      0x14, 0x1b, 0x0b, 0x68, 0x06, 0x56, 0x3d, 0x50,
      0x3d, 0xe0, 0x58, 0x85, 0x28, 0x0b, 0x59, 0x10,
      0x9c, 0xa5, 0xee, 0x38, 0xd7, 0xb5, 0x6c, 0x9c,
      0x16, 0x5d, 0xb7, 0x10, 0x63, 0x77, 0xbb, 0xd8
    },
    0
  },
  {
    {
      0x57, 0x11, 0x9f, 0xd0, 0xdd, 0x4e, 0x22, 0xd8,
      0x86, 0x8e, 0x1c, 0x58, 0xc4, 0x5c, 0x44, 0x04,
      0x5b, 0xef, 0x83, 0x9c, 0x55, 0xb1, 0xd0, 0xb1,
      0x24, 0x8c, 0x50, 0xa3, 0xbc, 0x95, 0x9c, 0x5f
    },
    {
      0x68, 0xc5, 0x93, 0x89, 0x3d, 0x45, 0x8e, 0x64,
      0x31, 0xc6, 0xca, 0x00, 0x45, 0xfb, 0x50, 0x15,
      0x20, 0xa4, 0x43, 0x46, 0x8e, 0xaa, 0x68, 0xdd,
      0x0f, 0x10, 0x38, 0x42, 0x04, 0x80, 0x65, 0xb7
    },
    0
  },
  {
    {
      0x57, 0x11, 0x9f, 0xd0, 0xdd, 0x4e, 0x22, 0xd8,
      0x86, 0x8e, 0x1c, 0x58, 0xc4, 0x5c, 0x44, 0x04,
      0x5b, 0xef, 0x83, 0x9c, 0x55, 0xb1, 0xd0, 0xb1,
      0x24, 0x8c, 0x50, 0xa3, 0xbc, 0x95, 0x9c, 0x5f
    },
    {
      0x17, 0x3a, 0x6c, 0x76, 0xc2, 0xba, 0x71, 0x9b,
      0xce, 0x39, 0x35, 0xff, 0xba, 0x04, 0xaf, 0xea,
      0xdf, 0x5b, 0xbc, 0xb9, 0x71, 0x55, 0x97, 0x22,
      0xf0, 0xef, 0xc7, 0xbd, 0xfb, 0x7f, 0x9a, 0x36
    },
    0
  },
  {
    {
      0x00, 0xb8, 0x49, 0x5f, 0x16, 0x05, 0x62, 0x86,
      0xfd, 0xb1, 0x32, 0x9c, 0xeb, 0x8d, 0x09, 0xda,
      0x6a, 0xc4, 0x9f, 0xf1, 0xfa, 0xe3, 0x56, 0x16,
      0xae, 0xb8, 0x41, 0x3b, 0x7c, 0x7a, 0xeb, 0xe0
    },
    {
      0x39, 0x31, 0xc1, 0x29, 0x56, 0x9e, 0x83, 0xa5,
      0x29, 0x48, 0x2c, 0x14, 0xe6, 0x28, 0xb4, 0x57,
      0x93, 0x3b, 0xfc, 0x29, 0xed, 0x80, 0x1b, 0x4d,
      0x68, 0x87, 0x14, 0x83, 0x92, 0x50, 0x7b, 0x1a
    },
    0
  },
  {
    {
      0x00, 0xb8, 0x49, 0x5f, 0x16, 0x05, 0x62, 0x86,
      0xfd, 0xb1, 0x32, 0x9c, 0xeb, 0x8d, 0x09, 0xda,
      0x6a, 0xc4, 0x9f, 0xf1, 0xfa, 0xe3, 0x56, 0x16,
      0xae, 0xb8, 0x41, 0x3b, 0x7c, 0x7a, 0xeb, 0xe0
    },
    {
      0x46, 0xce, 0x3e, 0xd6, 0xa9, 0x61, 0x7c, 0x5a,
      0xd6, 0xb7, 0xd3, 0xeb, 0x19, 0xd7, 0x4b, 0xa8,
      0x6c, 0xc4, 0x03, 0xd6, 0x12, 0x7f, 0xe4, 0xb2,
      0x97, 0x78, 0xeb, 0x7c, 0x6d, 0xaf, 0x84, 0xd3
    },
    0
  }
};

static const subgroup_def_t subgroups_x448[4] = {
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    1
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
    },
    {
      0xba, 0x4d, 0x3a, 0x08, 0x29, 0xb6, 0x11, 0x2f,
      0x88, 0x12, 0xe5, 0x1b, 0xa0, 0xbb, 0x2a, 0xbe,
      0xbc, 0x1c, 0xb0, 0x8e, 0xb4, 0x8e, 0x55, 0x69,
      0x36, 0xba, 0x50, 0xfd, 0xd2, 0xe7, 0xd6, 0x8a,
      0xf8, 0xcb, 0x32, 0x16, 0x05, 0x22, 0x42, 0x5b,
      0x3f, 0x99, 0x08, 0x12, 0xab, 0xbe, 0x63, 0x5a,
      0xd3, 0x7a, 0x21, 0xe1, 0x75, 0x51, 0xb1, 0x93
    },
    0
  },
  {
    {
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
    },
    {
      0x45, 0xb2, 0xc5, 0xf7, 0xd6, 0x49, 0xee, 0xd0,
      0x77, 0xed, 0x1a, 0xe4, 0x5f, 0x44, 0xd5, 0x41,
      0x43, 0xe3, 0x4f, 0x71, 0x4b, 0x71, 0xaa, 0x96,
      0xc9, 0x45, 0xaf, 0x01, 0x2d, 0x18, 0x29, 0x75,
      0x07, 0x34, 0xcd, 0xe9, 0xfa, 0xdd, 0xbd, 0xa4,
      0xc0, 0x66, 0xf7, 0xed, 0x54, 0x41, 0x9c, 0xa5,
      0x2c, 0x85, 0xde, 0x1e, 0x8a, 0xae, 0x4e, 0x6c
    },
    0
  }
};

static const subgroup_def_t subgroups_ed25519[8] = {
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    1
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec
    },
    0
  },
  {
    {
      0x2b, 0x83, 0x24, 0x80, 0x4f, 0xc1, 0xdf, 0x0b,
      0x2b, 0x4d, 0x00, 0x99, 0x3d, 0xfb, 0xd7, 0xa7,
      0x2f, 0x43, 0x18, 0x06, 0xad, 0x2f, 0xe4, 0x78,
      0xc4, 0xee, 0x1b, 0x27, 0x4a, 0x0e, 0xa0, 0xb0
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0x54, 0x7c, 0xdb, 0x7f, 0xb0, 0x3e, 0x20, 0xf4,
      0xd4, 0xb2, 0xff, 0x66, 0xc2, 0x04, 0x28, 0x58,
      0xd0, 0xbc, 0xe7, 0xf9, 0x52, 0xd0, 0x1b, 0x87,
      0x3b, 0x11, 0xe4, 0xd8, 0xb5, 0xf1, 0x5f, 0x3d
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0x1f, 0xd5, 0xb9, 0xa0, 0x06, 0x39, 0x4a, 0x28,
      0xe9, 0x33, 0x99, 0x32, 0x38, 0xde, 0x4a, 0xbb,
      0x5c, 0x19, 0x3c, 0x70, 0x13, 0xe5, 0xe2, 0x38,
      0xde, 0xa1, 0x46, 0x46, 0xc5, 0x45, 0xd1, 0x4a
    },
    {
      0x05, 0xfc, 0x53, 0x6d, 0x88, 0x02, 0x38, 0xb1,
      0x39, 0x33, 0xc6, 0xd3, 0x05, 0xac, 0xdf, 0xd5,
      0xf0, 0x98, 0xef, 0xf2, 0x89, 0xf4, 0xc3, 0x45,
      0xb0, 0x27, 0xb2, 0xc2, 0x8f, 0x95, 0xe8, 0x26
    },
    0
  },
  {
    {
      0x60, 0x2a, 0x46, 0x5f, 0xf9, 0xc6, 0xb5, 0xd7,
      0x16, 0xcc, 0x66, 0xcd, 0xc7, 0x21, 0xb5, 0x44,
      0xa3, 0xe6, 0xc3, 0x8f, 0xec, 0x1a, 0x1d, 0xc7,
      0x21, 0x5e, 0xb9, 0xb9, 0x3a, 0xba, 0x2e, 0xa3
    },
    {
      0x05, 0xfc, 0x53, 0x6d, 0x88, 0x02, 0x38, 0xb1,
      0x39, 0x33, 0xc6, 0xd3, 0x05, 0xac, 0xdf, 0xd5,
      0xf0, 0x98, 0xef, 0xf2, 0x89, 0xf4, 0xc3, 0x45,
      0xb0, 0x27, 0xb2, 0xc2, 0x8f, 0x95, 0xe8, 0x26
    },
    0
  },
  {
    {
      0x1f, 0xd5, 0xb9, 0xa0, 0x06, 0x39, 0x4a, 0x28,
      0xe9, 0x33, 0x99, 0x32, 0x38, 0xde, 0x4a, 0xbb,
      0x5c, 0x19, 0x3c, 0x70, 0x13, 0xe5, 0xe2, 0x38,
      0xde, 0xa1, 0x46, 0x46, 0xc5, 0x45, 0xd1, 0x4a
    },
    {
      0x7a, 0x03, 0xac, 0x92, 0x77, 0xfd, 0xc7, 0x4e,
      0xc6, 0xcc, 0x39, 0x2c, 0xfa, 0x53, 0x20, 0x2a,
      0x0f, 0x67, 0x10, 0x0d, 0x76, 0x0b, 0x3c, 0xba,
      0x4f, 0xd8, 0x4d, 0x3d, 0x70, 0x6a, 0x17, 0xc7
    },
    0
  },
  {
    {
      0x60, 0x2a, 0x46, 0x5f, 0xf9, 0xc6, 0xb5, 0xd7,
      0x16, 0xcc, 0x66, 0xcd, 0xc7, 0x21, 0xb5, 0x44,
      0xa3, 0xe6, 0xc3, 0x8f, 0xec, 0x1a, 0x1d, 0xc7,
      0x21, 0x5e, 0xb9, 0xb9, 0x3a, 0xba, 0x2e, 0xa3
    },
    {
      0x7a, 0x03, 0xac, 0x92, 0x77, 0xfd, 0xc7, 0x4e,
      0xc6, 0xcc, 0x39, 0x2c, 0xfa, 0x53, 0x20, 0x2a,
      0x0f, 0x67, 0x10, 0x0d, 0x76, 0x0b, 0x3c, 0xba,
      0x4f, 0xd8, 0x4d, 0x3d, 0x70, 0x6a, 0x17, 0xc7
    },
    0
  }
};

static const subgroup_def_t subgroups_ed448[4] = {
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    1
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
    },
    0
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  }
};

static const subgroup_def_t subgroups_ed1174[4] = {
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    1
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
      0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6
    },
    0
  },
  {
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  },
  {
    {
      0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6
    },
    {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    0
  }
};
