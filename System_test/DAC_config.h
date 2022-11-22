/*********************************************************/
/* File:		DAC Driver Configurations for user       */
/* Author:		Hamdy Osama                              */
/* Date:		4/2/2021                                 */
/* Version:		V01                                      */
/*********************************************************/

#ifndef DAC_CONFIG_H
#define DAC_CONFIG_H

/*This file contains all the configurations possible for main DAC activation
  Future updates to the driver would include stand-alone functions that enables
  these features for multiple DACs simultaneously
*/
/*Version 1 available features:
		1- DAC Reference Select            			 (VREFH / VDDA)
		2- DAC Buffer Trigger Select          			(HW / SW)
		3- DAC Power Mode                   	   	  (HIGH / LOW)
		4- DAC Interrupt Enable (top and bottom)     (0 / 1)*
		5- DAC DMA Enable                      			 (0 / 1)*
		6- DAC Buffer Enable                   			 (0 / 1)
		7- DAC Buffer Mode                			(NORMAL / ONE_SCAN)
		8- DAC Buffer Upper Limit              			 (0 / 1)
* -> Do not enable DMA and Interrupts simultaneously
*/

/*1- DAC Reference Select:
        This is used to select the source of reference voltage (Vref) used by the DAC 
		module. Note that the 12 bit DAC output ranges from (Vref/4096) to (Vref)
		OPTIONS:
				VREFH_DAC  
				VDDA_DAC   -> Default
			Note: when using ADC + DAC Module, use VDDA for best ADC Performance */
	
	#define DAC_REF      VDDA_DAC
	
/*2- DAC Buffer Trigger Select:
		This is used to select what triggers the buffer pointer to move forward
		it can be hardware triggered or software triggered using Module Registers
		OPTIONS:
				HW_DAC 
				SW_DAC -> Default
		*/
		
	#define DAC_BUFFER_TRIGGER    SW_DAC
	
/*3- DAC Power Mode:
		This is used to select the power mode in which the module operates. High power
		mode outputs more current than Low power mode though both modes are capped to
		3.3V output
		OPTIONS:
				HIGH_DAC  -> Default
				LOW_DAC
		*/	
		
	#define DAC_POWER        HIGH_DAC
	
/*4- DAC Interrupts:
		This section is concerned with interrupts found in the DAC Module.
		Interrupts are triggered only in buffer mode when the buffer read pointer
		reaches top limit (decided in later section) or bottom limit (0)
		OPTIONS:
				0 -> Disabled -> Default
				1 -> Enabled
	Note: Not all DAC modules can operate top and bottom interrupts simultaneously
	      to prevent getting stuck in interrupt loops unless you know what you are doing :)
	*/
	
	#define DAC_TOP_INTERRUPT      0
	#define DAC_BOTTOM_INTERRUPT   0
	
/*5- DAC DMA Enable:
		This is used to enable DMA feature for this module. Note that it should not be
		used simultaneously with interrupts enabled for this module as both features use 
		the same registers
		OPTIONS:
				0 -> Disabled -> Default 
				1 -> Enabled
	*/
	
	#define DAC_DMA        0
	
/*6- DAC Buffer Enable:
		This is used to enable the buffer of the DAC Module. when the buffer is 
		Disabled, the value in data register is directly converted to analog output.
		When the buffer is enabled, data buffer is converted to analog output and value
		written in data register is not converted till it is pointed to by the buffer pointer
		OPTIONS:
				0 -> Disabled -> Default 
				1 -> Enabled
		Note: In version 1 of this driver, buffer mode is not supported
	*/
	
	#define DAC_BUFFER    0
	
/*7- DAC Buffer Mode:
		This is used to select the mode of operation of the buffer IF the buffer is enabled.
		OPTIONS:
				NORMAL_DAC   -> buffer pointer resets to zero after reaching upper limit ->Default
				ONE_SCAN_DAC -> buffer pinter stops after reaching upper limit
		*/
		
	#define DAC_BUFFER_MODE   NORMAL_DAC
	
	
/*8- DAC Buffer Upper Limit:
		This is used to set the upper limit to be reached by the buffer read pointer
		In current DAC Modules supported by this Driver, maximum upper limit reached is 1
		OPTIONS:
				0 -> Disabled 
				1 -> Enabled -> Default
	*/

	#define DAC_BUFFER_UPPER_LIMIT   1

#endif