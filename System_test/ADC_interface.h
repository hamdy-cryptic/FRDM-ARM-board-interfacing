/*********************************************************
   File:        User Interface for ADC Driver            *
   Author:      Hamdy Osama Mohamed                      *
   Version:     V01                                      *
   Date:        21/2/2021                                *
   Updates:     ----                                     *
*********************************************************/

#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

#include <MKL25Z4.h>
//Functions used for the ADC driver


void ADC_voidInit(uint8_t ADC_Module);      //Initialize selected ADC Module with configurations made in config file
int16_t ADC_u16PinRead(uint8_t ADC_Pin);   //Get data from analog pin (after successful conversion)

/*Note: this read function does not support 2 successive reads from SC1A, SC1B
For successive reads, call function twice or enable continuous conversion in config file
Utilizing A,B SC1 Registers will be added in a future version*/

//ADC_Module Options   //FRDM MKL25Z4 Board has ADC0 only
#define ADC_0     0

//ADC_Pin Options
/*NOTE:
		The following definitions are critical to successful mapping
		between board pins and ADC Module channels. 
		PLEASE DO NOT MODIFY THE FOLLOWING DEFINITIONS
*/
#define ADC_PE20    0
#define ADC_PE22    3
#define ADC_PE21    4  //When ADC_A is configured only
#define ADC_PB29    4  //When ADC_B is configured only
#define ADC_PD1     5  //When ADC_B is configured only
#define ADC_PD5     6  //When ADC_B is configured only
#define ADC_PE23    7  //When ADC_A is configured only
#define ADC_PD6     7  //When ADC_B is configured only
#define ADC_PB0     8
#define ADC_PB1     9
#define ADC_PC2     11
#define ADC_PB2     12
#define ADC_PB3     13
#define ADC_PC0     14
#define ADC_PC1     15
#define ADC_PE30    23

#define ADC_TEMP    26


#endif