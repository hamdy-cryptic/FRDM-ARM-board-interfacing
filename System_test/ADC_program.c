/*********************************************************
   File:        Program logic for ADC Driver             *
   Author:      Hamdy Osama Mohamed                      *
   Version:     V01                                      *
   Date:        21/2/2021                                *
   Updates:     ----                                     *
*********************************************************/

#include <MKL25Z4.h> //board register definitions

#include "ADC_interface.h"
#include "ADC_Private.h"
#include "ADC_config.h"


void ADC_voidInit(uint8_t ADC_Module){
	if (ADC_Module == ADC_0){   //Check for ADC Module
	
		SIM ->SCGC6 |= (1<<27);    //Clock Enabling for ADC0 Module
								
		// Set Configurations of the selected ADC Module	
		ADC0 -> SC1[0] = ADC_OFF;  //Reset SC1A Register (and disable ADC)
		ADC0 -> SC1[0] |=
		(ADC_INTERRUPT<<6)|        //Interrupt Configuration
		(ADC_DIFF_MODE<<5);        //Single Ended / Differential Configuration
		
		ADC0 -> SC1[1] = ADC_OFF;  //Reset SC1B Register (and disable ADC)
		ADC0 -> SC1[1] |=
		(ADC_INTERRUPT<<6)|        //Interrupt Configuration
		(ADC_DIFF_MODE<<5);        //Single Ended / Differential Configuration
		
		ADC0 -> CFG1 = 0;          //Reset CFG1 Register
		ADC0 -> CFG1 |=
		(ADC_LOW_POW<<7)|          //Low Power Mode Configuration
		(ADC_SAMPLE<< 4);          //ADC Sampling Time configuration
		
		//Setting clock divider
		#if (ADC_CLK_DIV==1)
			ADC0 -> CFG1 |= ADC_CLK_1;
		#elif (ADC_CLK_DIV==2)
			ADC0 -> CFG1 |= ADC_CLK_2;
		#elif (ADC_CLK_DIV==4)
			ADC0 -> CFG1 |= ADC_CLK_4;
		#elif (ADC_CLK_DIV==8)
			ADC0 -> CFG1 |= ADC_CLK_8;
		#endif
		
		//Setting ADC Resolution
		#if (ADC_RESOLUTION==8)
			ADC0 -> CFG1 |= ADC_RES_8;
		#elif (ADC_RESOLUTION==10)
			ADC0 -> CFG1 |= ADC_RES_10;
		#elif (ADC_RESOLUTION==12)
			ADC0 -> CFG1 |= ADC_RES_12;
		#elif (ADC_RESOLUTION==16)
			ADC0 -> CFG1 |= ADC_RES_16;		
		#endif
		
		ADC0 -> CFG2 = 0;         //Reset CFG2 Register
		ADC0 -> CFG2 |=
		(ADC_CH_MUX<<4);          //Selecting ADC Channel MUX Configuration
		
		ADC0 -> SC2 = 0;          //Reset SC2 Register
		ADC0 -> SC2 |= 
		(ADC_TRIGGER<<6)|         //Selecting ADC Trigger
		(ADC_DMA_ACTIVE<<2);      //DMA Enable Configuration
		
		ADC0 -> SC3 = 0;          //Reset SC3 Register
		ADC0 -> SC3 |=
		(ADC_CONTINUOUS<<3);      //Continuous ADC Conversion Configuration
	} 
	else{
		//Error
	}
}


int16_t ADC_u16PinRead(uint8_t ADC_Pin){
	if (ADC_Pin<24 || ADC_Pin==26){                                      //Check for input channel
		ADC0 -> SC1[0] =(ADC_INTERRUPT<<6)|(ADC_DIFF_MODE<<5)|ADC_Pin;     //Begin Conversion of selected channel
		while (COCO_BIT != 1){                                             //Wait till conversion is complete
			
		}
		return (ADC0 -> R[0]);	                                           //Return converted data (This clears COCO)
	}
	else{
		//Error
		return -1;
	}
}