#include <MKL25Z4.h>            //Include the header file of the MCU Pins
#include "DAC_interface.h"      //Include the DAC Driver
#include "ADC_interface.h"      //Include the ADC Driver
#include "GPIO_interface.h"     //Include the GPIO Driver

int main(){
	DAC_voidInit(DAC_0);   //Initialize DAC0 Module (Pin PE30 as output for LED Included)
	
	ADC_voidInit(ADC_0);       //Initialize ADC0 Module
	
	//Initializing a GPIO Pin to be Analog (Potentiometer input)
	MGPIO_voidInit(C);
	MGPIO_voidPinDirection(C, 2, ANALOG); 
	
	volatile uint16_t value = 0;  //Variable to store analog read and be used in DAC input
	while(1){
	value = ADC_u16PinRead(ADC_PC2);   //Reading analog pin
	//value = value * 4095/65335;        //use this formula if the ADC is 16 bit resolution to scale down the value to suitable range for DAC
	DAC_voidSetOutput(DAC_0,value);    //Setting DAC Output to a voltage level equal to that read on analog pin
	}
}

