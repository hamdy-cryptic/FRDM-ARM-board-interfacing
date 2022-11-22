/*********************************************************/
/* File:		DAC Driver Program Logic. Do not alter   */
/* Author:		Hamdy Osama                              */
/* Date:		4/2/2021                                 */
/* Version:		V01                                      */
/*********************************************************/

#include <MKL25Z4.h>

#include "DAC_interface.h"
#include "DAC_private.h"
#include "DAC_config.h"

void DAC_voidInit(uint8_t DAC_number){
	//Check DAC_Number
	if (DAC_number==DAC_0){
		SIM->SCGC6 |= (1<<31);		                // Clock activation for DAC0
		SIM->SCGC5 |= (1<<13);		                // Clock activation for PORTE
		PORTE->PCR[30] &=~ (7<<8);                // Pin 30 on PORTE is analog
		
		//Activate configuration options of DAC Module
		DAC0->C0 = 0; 							             //Reset C0 register 
		DAC0->C0 |= (DAC_REF<<6); 				       //Set reference voltage source
		DAC0->C0 |= (DAC_BUFFER_TRIGGER<<5);     //Set trigger source
		DAC0->C0 |= (DAC_POWER<<3);				       //Set DAC Power Mode
		DAC0->C0 |= (DAC_TOP_INTERRUPT<<1);		   //Set DAC Top Interrupt
		DAC0->C0 |= (DAC_BOTTOM_INTERRUPT<<0);   //Set DAC Bottom Interrupt
				
		DAC0->C1 = 0;							               //Reset C1 register
		DAC0->C1 |= (DAC_DMA<<7);				         //Set DMA configuration
		DAC0->C1 |= (DAC_BUFFER<<0);             //Set Buffer Configuration
		DAC0->C1 |= (DAC_BUFFER_MODE<<2);        //Set Buffer Mode
				
		DAC0->C2 = 0;							               //Reset C2 register
		DAC0->C2 |= (DAC_BUFFER_UPPER_LIMIT<<0); //Set Upper limit of buffer pointer
		
		//Reset data registers
		DAC0->DAT[0].DATL=0;
		DAC0->DAT[0].DATH =0;
		DAC0->DAT[1].DATL=0;
		DAC0->DAT[1].DATH =0;
		
	}
	else{
		//Error
	}
}

void DAC_voidSetOutput(uint8_t DAC_number,uint16_t DAC_value){
	//Check DAC_Number
	if (DAC_number==DAC_0){
		DAC0->DAT[0].DATL = (DAC_value&0xFF);       //Write lowest 8 bits of dac output value
		DAC0->DAT[0].DATH = ((DAC_value>>8)&0xF);   //Write highest 4 bits of dac output value
		
		DAC0->C0 |= (1<<7);                         //Enable DAC Module
	}
	else{
		//Error
	}
}

void DAC_voidDisableDAC(uint8_t DAC_number){
		//Check DAC Number
		if (DAC_number==DAC_0){		
		DAC0->C0 &= ~(1<<7);                   //Disable DAC Module
	}
	else{
		//Error
	}
}


uint16_t DAC_u16GetDACvalue(uint8_t DAC_number){
	//Check DAC Number
	if (DAC_number==DAC_0){		
		return ((DAC0->DAT[0].DATL)+((DAC0->DAT[0].DATH)<<8));
	}
	else{
		return -1; //Error state
	}
}


