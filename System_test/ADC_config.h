/*********************************************************
   File:        user configurations for ADC Driver       *
   Author:      Hamdy Osama Mohamed                      *
   Version:     V01                                      *
   Date:        21/2/2021                                *
   Updates:     ----                                     *
*********************************************************/

#ifndef ADC_CONFIG_H
#define ADC_CONFIG_H

/*Configurations available for the user to modify to get required ADC Performance
  
  1- Interrupt Enabling           (0/1)   
  2- Differential Mode            (0/1)
  3- Low Power Mode               (0/1)
  4- Clock Prescaler              (1/2/4/8)
  5- Sample Time                  (ADC_SHORT / ADC_LONG)
  6- Resolution                   (8/10/12/16)
  7- ADC MUX Channels             (ADC_A / ADC_B)
  8- Conversion Trigger           (ADC_SW / ADC_HW)
  9- DMA Enable                   (0/1)
 10- Continuous Conversion        (0/1)
*/

/*                    Future features to be added
1- More clock control
2- Compare modes of the ADC Module
3- More Sample time (Long) control
4- Reference voltage selection
5- Hardware Average of ADC Data
6- Calibration Features
*/

/*1- Interrupt Enabling
OPTIONS:
		0  -> Disabled (Default)
		1  -> Enabled
*/
#define ADC_INTERRUPT   0



/*2- Differential Mode: use signed (2s complement form) to convert analog data
OPTIONS:
		0  -> Disabled (Default)
		1  -> Enabled
*/
#define ADC_DIFF_MODE   0


/*3- Low Power Mode: slows max conversion speed in favor of power savings
OPTIONS:
		0  -> Disabled (Default)
		1  -> Enabled
*/
#define ADC_LOW_POW     0


/*4- Clock Divider(Prescaler): 
OPTIONS:
		1  ->  (Default)
		2
		4
		8
*/
#define ADC_CLK_DIV     1


/*5- Sample Time Select: select long time only if you have high resolution with fast clock
						 to increase ADC Module accuracy
OPTIONS:
		ADC_SHORT  ->  (Default)
		ADC_LONG
*/
#define ADC_SAMPLE     ADC_SHORT


/*6- Resolution: 
OPTIONS:
		8  
		10
		12   ->  (Default)
		16
*/
#define ADC_RESOLUTION     12


/*7- ADC MUX Channels Selection: Select which set of pins to be connected to ADC Channels						 
OPTIONS:
		ADC_A  ->  (Default)
		ADC_B
*/
#define ADC_CH_MUX     ADC_A


/*8- ADC Conversion Trigger Select: 
OPTIONS:
		ADC_SW  -> Software Triggered  (Default)
		ADC_HW  -> Hardware Triggered
*/
#define ADC_TRIGGER     ADC_SW


/*9- ADC DMA enable: 
OPTIONS:
		0  -> Disabled (Default)
		1  -> Enabled
*/
#define ADC_DMA_ACTIVE     0


/*10- ADC Continuous Conversion: 
OPTIONS:
		0  -> Disabled (Default)
		1  -> Enabled
*/
#define ADC_CONTINUOUS     0

#endif