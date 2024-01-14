#ifndef __STD_VX_H__
#define __STD_VX_H__

/**
  ******************************************************************************
  * @file    std.vx.h
  * @author  Matvey Rybalkin
  * @brief   Vertex header file for connecting all standard C++ libraries.
  *
  *          This file contains:
  *           - Include standard C++ libraries
  *           - Data types definition
  *           - Everything need to work with different architectures
  * 
  * @version  V0.3.0
  * @date     02. June 2023
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 Matvey Rybalkin
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
*/

/** @addtogroup Include С/С++ standart library
  * @{
  */

/** Conventional signs:
  *     <N> - not supported in some cases
  *     <O> - optional connection, can use memory
*/

#include <assert.h>
//#include <complex.h>      // <N>
#include <ctype.h>
#include <errno.h>
//#include <fenv.h>         // <N>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
//#include <signal.h>       // <O>
#include <stdalign.h>
#include <stdarg.h>
//#include <stdatomic.h>    // <N>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
//#include <tgmath.h>       // <N>
//#include <threads.h>      // <N>
#include <time.h>
//#include <uchar.h>        // <N>
//#include <wchar.h>        // <N>
//#include <wctype.h>       // <N>

/**
  * @}
  */

/* Standart Vertex Time library */
#include "time.vx.h"

/* Standart Vertex Time library */
#include "types.vx.h"

#endif // __STD_VX_H__
