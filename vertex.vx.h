#ifndef __VERTEX_VX__
#define __VERTEX_VX__

/**************************************************************************//**
 * @file     vertex.vx
 * @brief    Main Vertex framework file
 * @version  V3.3.0
 * @date     27. May 2023
 ******************************************************************************/

/* Copyright (c) 2023 Matvey Rybalkin
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright
		notice, this list of conditions and the following disclaimer.

	* Redistributions in binary form must reproduce the above copyright
		notice, this list of conditions and the following disclaimer in
		the documentation and/or other materials provided with the
		distribution.

	* Neither the name of the copyright holders nor the names of
		contributors may be used to endorse or promote products derived
		from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
	AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
	IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
	ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
	LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
	CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
	SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
	INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
	CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/

/*  Framework version  */
#define __vertex 33000L

#if __cplusplus < 201103L
	#error "[Vertex]: The Vertex 3 only supports C++ version 2011 and above."
#else // __cplusplus < 201103L

/* Including prefetences */
#include "vx/preferences.mut.h"

/* Start message */
#pragma message(_VX_STARTUP_MESSAGE_)
#pragma message("[Vertex]: Supported microcontrollers and architectures:")
#pragma message(_VX_MC_SPT_MESSAGE_)


/* Standart Vertex library */
#include "vx/software/std.vx.h"

/* Hardware Vertex libraries */

/** @addtogroup Hardware Vertex libraries
  * @{
  */

 	/* Generall */

	#include "vx/hardware/delay.vx.h"
	#include "vx/hardware/exint.vx.h"
	#include "vx/hardware/int.vx.h"
	#include "vx/hardware/io.vx.h"
	#include "vx/hardware/pwm.vx.h"
	#include "vx/hardware/timer.vx.h"

	/* Analog */

	#include "vx/hardware/analog/adc.vx.h"
	#include "vx/hardware/analog/dac.vx.h"

	/* Connectivity */

	#include "vx/hardware/connectivity/1wire.vx.h"
	#include "vx/hardware/connectivity/bluetooth.vx.h"
	#include "vx/hardware/connectivity/cfi.vx.h"
	#include "vx/hardware/connectivity/ecap.vx.h"
	#include "vx/hardware/connectivity/eqep.vx.h"
	#include "vx/hardware/connectivity/ethernet.vx.h"
	#include "vx/hardware/connectivity/fdcan.vx.h"
	#include "vx/hardware/connectivity/fsirx.vx.h"
	#include "vx/hardware/connectivity/fsitx.vx.h"
	#include "vx/hardware/connectivity/i2c.vx.h"
	#include "vx/hardware/connectivity/mcspi.vx.h"
	#include "vx/hardware/connectivity/spi.vx.h"
	#include "vx/hardware/connectivity/uart.vx.h"
	#include "vx/hardware/connectivity/usb.vx.h"

 /**
  * @}
  */

/* ************************* */

/* Platform list (look detailed in platform.list.h) */
#include "platforms/platforms_list.mut.h"

/* Platform list initialization (look detailed in platform.list.init.h) */
#include "platforms/platforms_list.init.mut.h"


/* Vertex program signature */

#if !defined(__VX_USE_INT_MAIN__)

	void setup();
	void loop();

	int main(void){
		#ifdef vx_platform_setup_init
			vx_platform_setup_init();
		#endif // vx_platform_setup_init
		setup();
		while(true){loop();};
	}

#else
	#warning message"[Vertex]: It is not recommended to use the standard function, as there may be problems with the optimization of some functions."
#endif 

#endif // __cplusplus >= 201103L
#endif // __VERTEX_VX__
