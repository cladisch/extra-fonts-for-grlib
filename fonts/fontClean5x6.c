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
//     Size: 5x6
//     Bold: no
//     Italic: no
//     Memory usage: 940 bytes
//
//*****************************************************************************

static const uint8_t g_pui8clean5x6Data[739] =
{
      4,   5, 240, 240,   7,   3,   1,  33,  33,  81,  80,   8,
      4,   1,  17,  17,  17, 240,  32,  11,   5,  17,  17,  21,
     17,  17,  21,  17,  17,  96,  10,   5,  19,  17,  17,  51,
     49,  17,  19,  96,  10,   5,   2,  35,  17,  49,  49,  19,
     34,  80,  10,   4,  18,  17,  65,  18,  17,  33,  17,  64,
      6,   4,  17,  33, 240,  64,   7,   2,  18,  17,  17,  33,
     32,   8,   4,   1,  65,  49,  49,  33, 112,  10,   4,   1,
     33,  18,  20,  18,  17,  33,  64,   8,   5,  33,  65,  37,
     33,  65, 112,   6,   4, 209,  49,  33,  48,   4,   4, 132,
    192,   5,   3, 145,  33,  80,   8,   5,  65,  49,  49,  49,
     49, 144,   9,   4,  18,  17,  20,  18,  33,  18,  80,   8,
      4,  17,  34,  49,  49,  49,  96,   8,   4,   3,  65,  18,
     17,  52,  64,   7,   4,   3,  65,  18,  68,  80,   8,   4,
     49,  34,  17,  21,  49,  64,   6,   4,   5,  51,  68,  80,
      9,   4,  18,  17,  51,  17,  33,  18,  80,   8,   4,   4,
     49,  33,  33,  33, 112,  10,   4,  18,  17,  33,  18,  17,
     33,  18,  80,   9,   4,  18,  17,  33,  19,  49,  18,  80,
      7,   3,   1,  33,  81,  33,  80,   8,   4,  17,  49, 113,
     49,  33,  48,   8,   4,  33,  33,  33,  65,  65,  80,   5,
      4,  68,  68, 128,   8,   3,   1,  49,  49,  17,  17,  80,
      7,   4,   3,  65,  18,  97,  96,   8,   4,  18,  17,  19,
     19,  66,  80,   8,   4,  18,  17,  34,  38,  33,  64,   8,
      4,   3,  17,  36,  17,  36,  80,   7,   4,  20,  49,  49,
     67,  64,   8,   4,   3,  17,  34,  34,  36,  80,   7,   4,
      5,  51,  17,  52,  64,   7,   4,   5,  51,  17,  49, 112,
      8,   4,  20,  49,  19,  33,  19,  64,   8,   4,   1,  34,
     38,  34,  33,  64,   8,   4,   3,  33,  49,  49,  35,  80,
      8,   4,  34,  49,  50,  33,  18,  80,  11,   4,   1,  34,
     17,  18,  33,  17,  17,  33,  64,   8,   4,   1,  49,  49,
     49,  52,  64,   7,   4,   1,  42,  34,  33,  64,   9,   4,
      1,  35,  18,  19,  34,  33,  64,   9,   4,  18,  17,  34,
     34,  33,  18,  80,   8,   4,   3,  17,  36,  17,  49, 112,
      9,   4,  18,  17,  34,  34,  33,  18,  50,  10,   4,   3,
     17,  36,  17,  17,  17,  33,  64,   6,   4,  20,  66,  68,
     80,   8,   5,   5,  33,  65,  65,  65, 112,   9,   4,   1,
     34,  34,  34,  33,  18,  80,   9,   4,   1,  34,  34,  33,
     18,  34,  80,   7,   4,   1,  34,  42,  33,  64,  10,   4,
      1,  34,  33,  18,  17,  34,  33,  64,  10,   5,   1,  49,
     17,  17,  49,  65,  65, 112,   8,   4,   4,  33,  33,  33,
     52,  64,   7,   2,   3,  17,  17,  18,  32,   8,   5,   1,
     81,  81,  81,  81,  80,   8,   4,   2,  49,  49,  49,  34,
     96,   7,   4,  17,  33,  17, 240,  32,   4,   4, 240,  84,
      5,   2,   1,  33, 128,   8,   4,  84,  34,  18,  17,  17,
     64,   8,   4,   1,  51,  17,  34,  36,  80,   6,   4,  84,
     49,  67,  64,   8,   4,  49,  20,  34,  33,  19,  64,   6,
      4,  82,  21,  66,  80,   8,   4,  34,  17,  35,  33,  49,
     96,   7,   4,  84,  33,  19,  49,  18,   9,   4,   1,  51,
     17,  34,  34,  33,  64,   7,   3,   1,  81,  33,  33,  80,
      7,   4,  49, 113,  50,  33,  18,  10,   4,   1,  49,  20,
     33,  17,  17,  33,  64,   8,   4,   2,  49,  49,  49,  35,
     80,   7,   4,  65,  38,  34,  33,  64,   9,   4,  65,  17,
     18,  18,  34,  33,  64,   8,   4,  82,  17,  34,  33,  18,
     80,   8,   4,  67,  17,  34,  36,  17,  48,   7,   4,  84,
     34,  33,  19,  49,   7,   4,  65,  20,  33,  49, 112,   5,
      4,  85,  69,  80,   8,   4,  17,  36,  17,  49,  66,  64,
      9,   4,  65,  34,  34,  18,  17,  17,  64,   8,   4,  65,
     34,  33,  18,  34,  80,   7,   4,  65,  34,  38,  33,  64,
      9,   4,  65,  33,  18,  34,  17,  33,  64,   8,   4,  65,
     34,  33,  19,  49,  18,   7,   4,  68,  33,  33,  36,  64,
      8,   3,  33,  17,  18,  33,  49,  48,   8,   3,   1,  33,
     33,  33,  33,  80,   8,   4,   1,  65,  50,  33,  33, 112,
      7,   4,  17,  18,  17, 240,  32,
};

const tFont g_sFontclean5x6 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    5,

    //
    // The height of the font.
    //
    6,

    //
    // The baseline of the font.
    //
    5,

    //
    // The offset to each character in the font.
    //
    {
           0,    4,   11,   19,   30,   40,   50,   60,
          66,   73,   81,   91,   99,  105,  109,  114,
         122,  131,  139,  147,  154,  162,  168,  177,
         185,  195,  204,  211,  219,  227,  232,  240,
         247,  255,  263,  271,  278,  286,  293,  300,
         308,  316,  324,  332,  343,  351,  358,  367,
         376,  384,  393,  403,  409,  417,  426,  435,
         442,  452,  462,  470,  477,  485,  493,  500,
         504,  509,  517,  525,  531,  539,  545,  553,
         560,  569,  576,  583,  593,  601,  608,  617,
         625,  633,  640,  647,  652,  660,  669,  677,
         684,  693,  701,  708,  716,  724,  732,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8clean5x6Data
};