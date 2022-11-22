/*********************************************************
   File:        interface data of GPIO Driver            *
   Author:      Hamdy Osama Mohamed                      *
   Version:     V01                                      *
   Date:        12/12/2020                               *
   Updates:     ----                                     *
*********************************************************/


   #ifndef GPIO_INTERFACE_H
   #define GPIO_INTERFACE_H
	 
	 #include <MKL25Z4.h>

   
   void MGPIO_voidInit (uint8_t Port); //Enable Port Clock and Config Properties for port selected pins
   void MGPIO_voidPinControl(uint8_t Port, uint8_t Pin, uint8_t Pull); //Enable Pin GPIO Mode + Pull up/down/off
   void MGPIO_voidPinDirection (uint8_t Port, uint8_t Pin, uint8_t Directon); //Input (Analog/Dgital) or Output Mode (Digital)
   void MGPIO_voidPinDigitalWrite (uint8_t Port, uint8_t Pin, uint8_t State); //Write Output Value
   void MGPIO_voidPinToggle(uint8_t Port, uint8_t Pin);//Toggle pin output
   uint8_t MGPIO_u8PinDigitalRead (uint8_t Port, uint8_t Pin); //Read Input Value (Digital)
   
   
   //Macros used in GPIO Functons: NOTE-> Please don't alter definition values
   
   
   //u8 Port Macros
   #define  A      9
   #define  B      10
   #define  C      11
   #define  D      12
   #define  E      13
   
   //u8 Pin Macros
   // Enter numbers from 0 to 31 based on pin number on mcu
   
   //u8 Pull Macros
   #define PULL_UP      1
   #define PULL_DOWN    0
   #define PULL_OFF     2
   
   //u8 Direction Macros
   #define INPUT        0
   #define OUTPUT       1
   #define ANALOG       2
   
   //U8 State Macros
   #define HIGH         1
   #define LOW          0
   
   
   
   #endif