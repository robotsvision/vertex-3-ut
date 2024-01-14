#ifndef __IO_VX_H__
#define __IO_VX_H__

/**************************************************************************//**
 * @file     io.vx.h (/hw)
 * @brief    I/O standart Vertex library
 * @version  V0.3.0
 * @date     2. November 2023
 ******************************************************************************/

/* Definitions for preprocessor testing the current MC */

/** @def
 *  <The sample of use>
 * 
 *  _VX_IO_SPT_ - main macros, if microcontroller supports GPIO;
 * 
 * It contains different realizations for different architectures:
 * 
 * Single GPIO channel:
 * * *  gpio.mode(5, OUTPUT);
 * 
 * Several GPIO channels:
 * * *  porta.mode(5, OUTPUT);
 * * *  portb.mode(5, OUTPUT); ...
 * 
*/


#if defined(_VX_IO_SPT_)

class io_vx_c{
protected:
	platform::gpio_reg_t _io_reg; // I/O registers structure
public:
	constexpr io_vx_c(platform::gpio_reg_t io_reg): _io_reg(io_reg) {}
	
    /* GPIO MODE */

    #if defined(_VX_IO_SPEED_SET_SPT_)
        void mode(platform::io_pin_t pin, io_mode_t io_mode,
		    io_speed_t io_speed = IO_MEDIUM_SPEED) {
            platform::io_mode(_io_reg, pin, io_mode);
        }
    #else // _VX_IO_SPEED_SET_SPT_
        void mode(platform::io_pin_t pin, io_mode_t io_mode) {
            platform::io_mode(_io_reg, pin, io_mode);
        }
    #endif // !_VX_IO_SPEED_SET_SPT_

    /* GPIO WRITE */

	void write(platform::io_pin_t pin, io_state_t value) {
		platform::io_write(_io_reg, pin, value);
	}

    /* GPIO TOGGLE */
	
    void toggle(platform::io_pin_t pin) {
		platform::io_toggle(_io_reg, pin);
	}
	
    /* GPIO READ */

	bool read(platform::io_pin_t pin) {
		return platform::io_read(_io_reg, pin);
	}
	
};

#endif // defined(_VX_IO_SPT_)

#endif // __IO_VX_H__
