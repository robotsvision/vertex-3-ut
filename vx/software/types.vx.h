#ifndef __TYPES_VX_H__
#define __TYPES_VX_H__

/**************************************************************************//**
 * @file     types.vx.h
 * @brief    Definition of Vertex types
 * @version  V0.2.0
 * @date     28. May 2023
 ******************************************************************************/

/* Register types definition */

using reg_8_t = volatile uint8_t*;
using reg_16_t = volatile uint16_t*;
using reg_32_t = volatile uint32_t*;
using reg_64_t = volatile uint64_t*;

using io_reg_8_t = volatile uint8_t*;
using io_reg_16_t = volatile uint16_t*;
using io_reg_32_t = volatile uint32_t*;
using io_reg_64_t = volatile uint64_t*;


/* Vertex char type */

class vchar {
protected:
	mutable uint8_t _data = 0;
public:
	vchar() = default;

	bool getBit(size_t adr) const {
		return (_data & (1 << adr));
	}
	
	void setBit(size_t adr, bool value){
		if (value) {
			_data |= (1 << adr);
		} else {
			_data &= ~(1 << adr);
		}
	}
};


#endif // __TYPES_VX_H__
