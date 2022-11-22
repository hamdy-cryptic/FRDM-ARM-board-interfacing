/*********************************************************/
/* File:		DAC Driver Interface Functions for user  */
/* Author:		Hamdy Osama                              */
/* Date:		4/2/2021                                 */
/* Version:		V01                                      */
/*********************************************************/

#ifndef DAC_INTERFACE_H
#define DAC_INTERFACE_H

#include <MKL25Z4.h>

void DAC_voidInit(uint8_t DAC_number);                
//Used to initialize the DAC Module used. for FRDMKL25Z -> DAC_0 is used
void DAC_voidSetOutput(uint8_t DAC_number,uint16_t DAC_value);
//Used to set output voltage on DAC Module... DAC_value from 0 to 4095 indicates voltage level
void DAC_voidDisableDAC(uint8_t DAC_number);
//Close DAC Module if not used to save power
uint16_t DAC_u16GetDACvalue(uint8_t DAC_number);
//Return the value (0 to 4095) output found currently on DAC Module


//DAC_number Options
#define DAC_0    0

//DAC_value Options
// FROM 0 TO 4095

#endif