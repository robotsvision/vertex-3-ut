#ifndef __ADC_VX_H__
#define __ADC_VX_H__

/**************************************************************************//**
 * @file     adc.vx.h (/hw)
 * @brief    ADC standart Vertex library
 * @version  V0.3.0
 * @date     2. November 2023
 ******************************************************************************/

/************************************************************/
/* !THIS IS NOT A STANDARDIZED LIBRARY, SUBJECT TO CHANGES! */
/************************************************************/

#if defined(_VX_ADC_SPT_)

class adc_vx_c{
protected:
	platform::adc_reg_t _adc_reg; // I/O registers structure
public:
	constexpr adc_vx_c(platform::adc_reg_t adc_reg): _adc_reg(adc_reg) {}
	
    /* ADC INIT */

    void init(platform::adc_freq_t adc_freq, platform::adc_source_t adc_source) {
        platform::adc_init(adc_freq, pin, adc_source);
    }

    /* PWM READ */

	platform::adc_value_t read(platform::gpio_pin_t pin) {
		return platform::adc_read(_adc_reg, pin);
	}

    /* PWM REFERENCE */
	
    void reference(platform::adc_source_t adc_source) {
		platform::adc_reference(adc_source);
	}
	
};

#endif // defined(_VX_ADC_SPT_)

#endif // __ADC_VX_H__