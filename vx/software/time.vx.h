#ifndef __TIME_VX_H__
#define __TIME_VX_H__

/**
  ******************************************************************************
  * @file    time.vx.h
  * @author  Matvey Rybalkin
  * @brief   Vertex header file containing everything need to work with time.
  *
  *          This file contains:
  *           - Include standard C++ libraries
  *           - Data types definition
  *
  * @version  V0.0.2
  * @date     02. June 2023
  ******************************************************************************
*/

/* Standart Vertex namespace vx */

namespace vx{
    using ::clock_t;
    using ::time_t;
    using ::tm;

    using ::clock;
    using ::difftime;
    using ::mktime;
    using ::time;
    using ::asctime;
    using ::ctime;
    using ::gmtime;
    using ::localtime;
    using ::strftime;
}

#endif // __TIME_VX_H__
