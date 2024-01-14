#ifndef __DELAY_VX_H__
#define __DELAY_VX_H__

/**************************************************************************//**
 * @file     delay.vx.h (/hw)
 * @brief    Delay standart Vertex library
 * @version  V0.3.0
 * @date     31. May 2023
 ******************************************************************************/

/**
 * This file contains the standard Vertex framework
 * class for dealing with the delay.
 * 
 * Everything inside the platform namespace is determined by
 * the functionality of the platform itself for the current compilation.
*/

/** @def
 *  <The sample of use>
 * 
 *  _VX_DELAY_SPT_ - main macros, if microcontroller supports hardware delays;
 * 
 * Creating sample: (platforms/NAME/NAME_DELAY.h)
 * * *  static delay_vx_c delay;
 * 
 * Calling example:
 * * *  delay.s(0.6);
 * 
*/

/* Check delay support */
#if defined(_VX_DELAY_SPT_)

class delay_vx_c{
public:
	delay_vx_c() = default;
	void s(double t){
		platform::delay_s(t);
	}
	void ms(double t){
		platform::delay_ms(t);
	}
	void us(double t){
		platform::delay_us(t);
	}
};

#endif // _VX_DELAY_SPT_

#endif // __DELAY_VX_H__
