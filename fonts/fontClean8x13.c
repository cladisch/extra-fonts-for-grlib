//*****************************************************************************
//
// Copyright 1989 Dale Schumacher, dal@syntel.mn.org
//                399 Beacon Ave.
//                St. Paul, MN  55104-3527
// 
// Permission to use, copy, modify, and distribute this software and
// its documentation for any purpose and without fee is hereby
// granted, provided that the above copyright notice appear in all
// copies and that both that copyright notice and this permission
// notice appear in supporting documentation, and that the name of
// Dale Schumacher not be used in advertising or publicity pertaining to
// distribution of the software without specific, written prior
// permission.  Dale Schumacher makes no representations about the
// suitability of this software for any purpose.  It is provided "as
// is" without express or implied warranty.
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: Clean
//     Size: 8x13
//     Bold: no
//     Italic: no
//     Memory usage: 1532 bytes
//
//*****************************************************************************

static const uint8_t g_pui8clean8x13Data[1329] =
{
      4,   8,   0,  13,  12,   4,  65,  49,  49,  49,  49,  49,
     49, 113,  49, 176,  13,   5,  81,  17,  33,  17,  33,  17,
     33,  17, 240, 240, 192,  23,   7, 129,  33,  49,  33,  49,
     33,  38,  33,  33,  49,  33,  49,  33,  38,  33,  33,  49,
     33,  49,  33, 144,  23,   6,  33,  67,  33,  17,  17,  17,
     17,  49,  17,  66,  82,  65,  17,  49,  17,  17,  17,  17,
     35,  65, 144,  20,   7, 241,  81,  17,  65,  17,  33,  33,
     33,  81,  81,  33,  33,  33,  17,  65,  17,  81, 240,  16,
      7, 244,  33,  97, 113,  98,  65,  33,  34,  50,  17,  50,
     35,  33, 224,   8,   5,  98,  49,  49,   0,   6,  16,  14,
      5, 113,  49,  65,  49,  65,  65,  65,  65,  81,  65,  81,
    112,  14,   5,  81,  81,  65,  81,  65,  65,  65,  65,  49,
     65,  49, 144,  16,   7, 240, 145,  97,  50,  17,  18,  35,
     81,  81,  17,  49,  49, 240, 112,  12,   7, 240, 145,  97,
     97,  55,  49,  97,  97, 240, 144,   9,   6,   0,   6, 114,
     66,  65,  65,  80,   8,   7, 240, 240, 199, 240, 240, 192,
      7,   5, 240, 240, 242,  50, 208,  15,   7,  81,  97,  81,
     97,  81,  97,  81,  97,  81,  97,  81,  97, 208,  22,   7,
    132,  33,  65,  17,  65,  17,  65,  17,  65,  17,  65,  17,
     65,  17,  65,  17,  65,  36, 240,  16,  13,   5,  97,  50,
     65,  65,  65,  65,  65,  65,  65,  65, 208,  14,   7, 132,
     33,  65,  97,  97,  81,  81,  81,  81,  81, 102, 240,  16,
      7, 132,  33,  65,  97,  97,  51, 113,  97,  97,  17,  65,
     36, 240,  16,  18,   7, 162,  82,  65,  17,  65,  17,  49,
     33,  49,  33,  33,  49,  38,  81,  83, 240,  15,   7, 118,
     17,  97,  97, 101, 113,  97,  97,  17,  65,  36, 240,  16,
     18,   7, 147,  49,  81,  97, 101,  33,  65,  17,  65,  17,
     65,  17,  65,  36, 240,  16,  15,   7, 118,  17,  65,  97,
     81,  97,  81,  97,  81,  97,  97, 240,  48,  21,   7, 132,
     33,  65,  17,  65,  17,  65,  36,  33,  65,  17,  65,  17,
     65,  17,  65,  36, 240,  16,  18,   7, 132,  33,  65,  17,
     65,  17,  65,  17,  65,  37,  97,  97,  81,  51, 240,  32,
      9,   5, 240,  82,  50, 240,  50,  50, 208,  11,   6, 240,
    162,  66, 240, 114,  66,  65,  65,  80,  12,   7, 240, 193,
     66,  50,  50, 114, 114, 113, 240,  96,   8,   7, 240, 240,
     87, 231, 240, 208,  12,   7, 240,  97, 114, 114, 114,  50,
     50,  65, 240, 192,  14,   7, 133,  17,  81,  97,  81,  81,
     81,  97, 209,  97, 240,  32,  20,   7, 240, 131,  49,  49,
     17,  33,  34,  17,  17,  18,  17,  17,  18,  33,  17,  33,
    116, 240,  18,   7, 240,  33,  97,  83,  65,  17,  65,  17,
     53,  33,  49,  33,  49,  18,  50, 224,  12,   7, 230,  17,
     82,  82,  87,  17,  82,  82,  87, 240,  14,   7, 240,  20,
     33,  66,  97,  97,  97,  97, 113,  65,  36, 240,  15,   7,
    229,  33,  65,  17,  82,  82,  82,  82,  82,  65,  21, 240,
     16,  11,   7, 232,  97,  97, 101,  33,  97,  97, 103, 224,
     12,   7, 232,  97,  97, 101,  33,  97,  97,  97, 240,  80,
     15,   7, 240,  20,  33,  66,  97,  97,  97,  52,  81,  17,
     65,  37, 224,  12,   7, 225,  82,  82,  82,  89,  82,  82,
     82,  81, 224,  12,   6, 197,  49,  81,  81,  81,  81,  81,
     81,  53, 208,  16,   7, 240,  35,  97,  97,  97,  97,  97,
     17,  65,  17,  65,  36, 240,  16,  20,   7, 225,  65,  17,
     49,  33,  33,  49,  17,  66,  81,  17,  65,  33,  49,  49,
     33,  65, 240,  12,   7, 225,  97,  97,  97,  97,  97,  97,
     97, 102, 240,  19,   7, 225,  82,  83,  52,  51,  17,  17,
     18,  17,  17,  18,  33,  34,  33,  34,  81, 224,  16,   7,
    225,  82,  83,  66,  17,  50,  33,  34,  49,  18,  67,  82,
     81, 224,  17,   7, 240,  19,  49,  49,  17,  82,  82,  82,
     82,  81,  17,  49,  51, 240,  16,  13,   7, 230,  17,  82,
     82,  87,  17,  97,  97,  97, 240,  80,  19,   7, 240,  19,
     49,  49,  17,  82,  82,  82,  82,  81,  17,  49,  51,  49,
     17,  33,  66,  16,   7, 230,  17,  82,  82,  87,  17,  33,
     49,  49,  33,  65,  17,  81, 224,  12,   7, 245,  17,  82,
     97, 117, 113,  98,  81,  21, 240,  13,   7, 231,  49,  97,
     97,  97,  97,  97,  97,  97, 240,  32,  13,   7, 225,  82,
     82,  82,  82,  82,  82,  82,  81,  21, 240,  18,   7, 225,
     82,  82,  81,  17,  49,  33,  49,  49,  17,  65,  17,  81,
     97, 240,  32,  19,   7, 225,  82,  82,  33,  34,  33,  34,
     17,  17,  18,  17,  17,  19,  52,  51,  81, 224,  18,   7,
    225,  82,  81,  17,  49,  49,  17,  81,  81,  17,  49,  49,
     17,  82,  81, 224,  16,   7, 225,  82,  81,  17,  49,  49,
     17,  81,  97,  97,  97,  97, 240,  32,  12,   7, 231,  97,
     81,  81,  81,  81,  81,  81, 103, 224,  14,   5,  83,  33,
     65,  65,  65,  65,  65,  65,  65,  65,  67, 112,  15,   7,
      1,  97, 113,  97, 113,  97, 113,  97, 113,  97, 113,  97,
    128,  14,   5,  83,  65,  65,  65,  65,  65,  65,  65,  65,
     65,  35, 112,  12,   7,  49,  81,  17,  49,  49,  17,  81,
      0,   7, 112,   5,   7,   0,  10,  71,   8,   5,  82,  65,
     81,   0,   5, 112,  12,   7, 240, 231,  82,  82,  82,  82,
     66,  20,  17, 224,  13,   7, 113,  97,  97, 102,  17,  82,
     82,  82,  82,  87, 240,  11,   7, 240, 229,  17,  97,  97,
     97,  97, 117, 240,  13,   7, 209,  97,  97,  23,  82,  82,
     82,  82,  81,  22, 224,  10,   7, 240, 229,  17,  82,  89,
     97, 117, 240,  14,   6, 132,  17,  81,  68,  49,  81,  81,
     81,  81,  81, 240,  16,  12,   7, 240, 231,  82,  82,  82,
     82,  81,  22,  97,  21,  14,   7, 113,  97,  97, 102,  17,
     82,  82,  82,  82,  82,  81, 224,  12,   6, 129,  81, 147,
     81,  81,  81,  81,  81,  53, 208,  14,   6, 161,  81, 132,
     81,  81,  81,  81,  81,  81,  81,  20,  32,  19,   7, 113,
     97,  97,  97,  65,  17,  49,  33,  33,  51,  65,  33,  49,
     49,  33,  65, 240,  13,   6,  99,  81,  81,  81,  81,  81,
     81,  81,  81,  53, 208,  17,   7, 240, 211,  18,  17,  33,
     34,  33,  34,  33,  34,  33,  34,  82,  81, 224,  13,   7,
    240, 209,  20,  18,  66,  82,  82,  82,  82,  81, 224,  12,
      7, 240, 229,  17,  82,  82,  82,  82,  81,  21, 240,  13,
      7, 240, 214,  17,  82,  82,  82,  82,  87,  17,  97,  96,
     12,   7, 240, 231,  82,  82,  82,  82,  81,  22,  97,  97,
     13,   7, 240, 209,  20,  18,  81,  97,  97,  97,  97, 240,
     80,  12,   7, 240, 229,  17,  97, 116, 113,  97,  21, 240,
     16,  13,   7, 145,  97,  97,  70,  49,  97,  97,  97,  97,
    115, 240,  13,   7, 240, 209,  82,  82,  82,  82,  82,  66,
     20,  17, 224,  17,   7, 240, 210,  50,  17,  49,  33,  49,
     49,  17,  65,  17,  81,  97, 240,  32,  17,   7, 240, 209,
     82,  82,  33,  34,  33,  34,  33,  34,  33,  33,  18,  18,
    240,  17,   7, 240, 209,  81,  17,  49,  49,  17,  81,  81,
     17,  49,  49,  17,  81, 224,  13,   7, 240, 209,  82,  82,
     82,  82,  82,  81,  22,  97,  21,  11,   7, 240, 215,  81,
     81,  81,  81,  81,  87, 224,  14,   5, 113,  49,  65,  65,
     65,  49,  81,  65,  65,  65,  81, 112,  14,   4,  65,  49,
     49,  49,  49,  49,  49,  49,  49,  49,  49, 112,  14,   5,
     81,  81,  65,  65,  65,  81,  49,  65,  65,  65,  49, 144,
      9,   7, 130,  50,  33,  34,  50,   0,   8,
};

const tFont g_sFontclean8x13 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    8,

    //
    // The height of the font.
    //
    13,

    //
    // The baseline of the font.
    //
    11,

    //
    // The offset to each character in the font.
    //
    {
           0,    4,   16,   29,   52,   75,   95,  111,
         119,  133,  147,  163,  175,  184,  192,  199,
         214,  236,  249,  263,  279,  297,  312,  330,
         345,  366,  384,  393,  404,  416,  424,  436,
         450,  470,  488,  500,  514,  529,  540,  552,
         567,  579,  591,  607,  627,  639,  658,  674,
         691,  704,  723,  739,  751,  764,  777,  795,
         814,  832,  848,  860,  874,  889,  903,  915,
         920,  928,  940,  953,  964,  977,  987, 1001,
        1013, 1027, 1039, 1053, 1072, 1085, 1102, 1115,
        1127, 1140, 1152, 1165, 1177, 1190, 1203, 1220,
        1237, 1254, 1267, 1278, 1292, 1306, 1320,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8clean8x13Data
};
