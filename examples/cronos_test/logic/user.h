// *************************************************************************************************
//
//	Copyright (C) 2009 Texas Instruments Incorporated - http://www.ti.com/ 
//	 
//	 
//	  Redistribution and use in source and binary forms, with or without 
//	  modification, are permitted provided that the following conditions 
//	  are met:
//	
//	    Redistributions of source code must retain the above copyright 
//	    notice, this list of conditions and the following disclaimer.
//	 
//	    Redistributions in binary form must reproduce the above copyright
//	    notice, this list of conditions and the following disclaimer in the 
//	    documentation and/or other materials provided with the   
//	    distribution.
//	 
//	    Neither the name of Texas Instruments Incorporated nor the names of
//	    its contributors may be used to endorse or promote products derived
//	    from this software without specific prior written permission.
//	
//	  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
//	  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
//	  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//	  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
//	  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
//	  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
//	  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//	  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//	  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
//	  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
//	  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// *************************************************************************************************

#ifndef USER_H_
#define USER_H_


// *************************************************************************************************
// Defines section

//if value reache lower or upper limit, restart at other end of range
#define SETVALUE_ROLLOVER_VALUE				BIT0
//nop
#define SETVALUE_DISPLAY_VALUE				BIT1
//display arrows corresponding to sign of value
#define SETVALUE_DISPLAY_ARROWS				BIT2
//nop
#define SETVALUE_DISPLAY_SELECTION			BIT3
//accelerate selection when button is held pressed
#define SETVALUE_FAST_MODE					BIT4
//exit when num is pressed
#define SETVALUE_NEXT_VALUE					BIT5
//display single symbol, exit when value is changed from 0
#define SETVALUE_DISPLAY_SYMBOL				BIT6
//choose direction with array symbols (up: value odd, down: value even)
#define SETVALUE_SWITCH_ARROWS				BIT7
//only allow steps of fife
#define SETVALUE_STEP_FIFE					BIT8

// *************************************************************************************************
// Prototypes section	
extern uint8_t * select_view_style(uint8_t line, uint8_t * view1, uint8_t * view2);
extern void (*fptr_setValue_display_function1)(uint8_t segments, uint32_t  value, uint8_t digits, uint8_t blanks);
extern void set_value(int32_t  * value, uint8_t digits, uint8_t blanks, int32_t  limitLow, int32_t  limitHigh, uint16_t mode, uint8_t segments, void (*fptr_setValue_display_function1)(uint8_t segments, uint32_t  value, uint8_t digits, uint8_t blanks, uint8_t disp_mode));
extern void dummy(uint8_t line);

#endif /*USER_H_*/
