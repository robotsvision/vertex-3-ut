#ifndef __DAC_VX_H__
#define __DAC_VX_H__

/**************************************************************************//**
 * @file     dac.vx.h (/hw)
 * @brief    DAC standart Vertex library
 * @version  V0.3.0
 * @date     2. November 2023
 ******************************************************************************/

/************************************************************/
/* !THIS IS NOT A STANDARDIZED LIBRARY, SUBJECT TO CHANGES! */
/************************************************************/

#if defined(_VX_DAC_SPT_)

class dac_vx_c{
protected:
	platform::dac_reg_t _dac_reg; // I/O registers structure
public:
	constexpr dac_vx_c(platform::dac_reg_t dac_reg): _dac_reg(dac_reg) {}
	
    /* DAC INIT */

    void init(platform::dac_freq_t dac_freq, platform::dac_source_t dac_source) {
        platform::dac_init(dac_freq, pin, dac_source);
    }

    /* PWM WRITE */

	void write(platform::gpio_pin_t pin, platform::gpio_dac_value_t pin) {
		platform::dac_write(_dac_reg, pin, value);
	}
	
};

#endif // defined(_VX_DAC_SPT_)

#endif // __DAC_VX_H__