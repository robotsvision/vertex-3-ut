#ifndef __PWM_VX_H__
#define __PWM_VX_H__

/**************************************************************************//**
 * @file     pwm.vx.h (/hw)
 * @brief    I/O standart Vertex library
 * @version  V0.3.0
 * @date     2. November 2023
 ******************************************************************************/

/* Definitions for preprocessor testing the current MC */

/** @def
 *  <The sample of use>
 * 
 *  _VX_PWM_SPT_ - main macros, if microcontroller supports PWM;
 * 
 * It contains different realizations for different architectures:
 * 
 * PWM example:
 * * *  pwm1.mode(5, FAST_PWM, 50);
 * 
*/

/************************************************************/
/* !THIS IS NOT A STANDARDIZED LIBRARY, SUBJECT TO CHANGES! */
/************************************************************/

#if defined(_VX_PWM_SPT_)

class pwm_vx_c{
protected:
	platform::pwm_reg_t _pwm_reg; // I/O registers structure
public:
	constexpr pwm_vx_c(platform::pwm_reg_t pwm_reg): _pwm_reg(pwm_reg) {}
	
    /* PWM MODE */

    void mode(platform::gpio_pin_t pin, pwm_mode_t pwm_mode, pwm_freq_t pwm_freq) {
        platform::pwm_mode(_pwm_reg, pin, pwm_mode, pwm_freq);
    }

    /* PWM WRITE */

	void write(platform::gpio_pin_t pin, pwm_state_t value) {
		platform::pwm_write(_pwm_reg, pin, value);
	}

    /* PWM START */
	
    void start(platform::gpio_pin_t pin) {
		platform::pwm_toggle(_pwm_reg, pin);
	}
	
    /* PWM STOP */

	bool stop(platform::gpio_pin_t pin) {
		return platform::pwm_read(_pwm_reg, pin);
	}
	
};

#endif // defined(_VX_PWM_SPT_)

#endif // __PWM_VX_H__