/*********************************************************
   File:        Program Logic of GPIO Driver             *
   Author:      Hamdy Osama Mohamed                      *
   Version:     V01                                      *
   Date:        12/12/2020                               *
   Updates:     ----                                     *
*********************************************************/

#include <MKL25Z4.h>

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void MGPIO_voidInit (uint8_t Port){
	//Set Port Clock from System Integration Module (RCC)
	if (Port == A){
		SIM->SCGC5 |= PORTA_CLK_MASK;
		//Set pin configuration properties from config.h
		#ifdef Pin0
			PORTA -> PCR[Pin0] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin0] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin1
			PORTA -> PCR[Pin1] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin1] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin2
			PORTA -> PCR[Pin2] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin2] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin3
			PORTA -> PCR[Pin3] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin3] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin4
			PORTA -> PCR[Pin4] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin4] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin5
			PORTA -> PCR[Pin5] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin5] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin6
			PORTA -> PCR[Pin6] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin6] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin7
			PORTA -> PCR[Pin7] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin7] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin8
			PORTA -> PCR[Pin8] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin8] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin9
			PORTA -> PCR[Pin9] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin9] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin10
			PORTA -> PCR[Pin10] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin10] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin11
			PORTA -> PCR[Pin11] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin11] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin12
			PORTA -> PCR[Pin12] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin12] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin13
			PORTA -> PCR[Pin13] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin13] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin14
			PORTA -> PCR[Pin14] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin14] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin15
			PORTA -> PCR[Pin15] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin15] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin16
			PORTA -> PCR[Pin16] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin16] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin17
			PORTA -> PCR[Pin17] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin17] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin18
			PORTA -> PCR[Pin18] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin18] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin19
			PORTA -> PCR[Pin19] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin19] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin20
			PORTA -> PCR[Pin20] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin20] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin21
			PORTA -> PCR[Pin21] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin21] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin22
			PORTA -> PCR[Pin22] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin22] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin23
			PORTA -> PCR[Pin23] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin23] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin24
			PORTA -> PCR[Pin24] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin24] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin25
			PORTA -> PCR[Pin25] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin25] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin26
			PORTA -> PCR[Pin26] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin26] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin27
			PORTA -> PCR[Pin27] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin27] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin28
			PORTA -> PCR[Pin28] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin28] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin29
			PORTA -> PCR[Pin29] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin29] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin30
			PORTA -> PCR[Pin30] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin30] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin31
			PORTA -> PCR[Pin31] &=~(0x00000054);  //Reset Config Parameters
			PORTA -> PCR[Pin31] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
	}
	else if (Port == B){
		SIM->SCGC5 |= PORTB_CLK_MASK;
		//Set pin configuration properties from config.h
		#ifdef Pin0
			PORTB -> PCR[Pin0] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin0] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin1
			PORTB -> PCR[Pin1] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin1] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin2
			PORTB -> PCR[Pin2] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin2] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin3
			PORTB -> PCR[Pin3] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin3] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin4
			PORTB -> PCR[Pin4] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin4] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin5
			PORTB -> PCR[Pin5] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin5] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin6
			PORTB -> PCR[Pin6] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin6] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin7
			PORTB -> PCR[Pin7] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin7] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin8
			PORTB -> PCR[Pin8] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin8] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin9
			PORTB -> PCR[Pin9] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin9] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin10
			PORTB -> PCR[Pin10] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin10] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin11
			PORTB -> PCR[Pin11] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin11] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin12
			PORTB -> PCR[Pin12] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin12] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin13
			PORTB -> PCR[Pin13] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin13] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin14
			PORTB -> PCR[Pin14] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin14] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin15
			PORTB -> PCR[Pin15] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin15] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif  
		#ifdef Pin16
			PORTB -> PCR[Pin16] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin16] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin17
			PORTB -> PCR[Pin17] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin17] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin18
			PORTB -> PCR[Pin18] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin18] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin19
			PORTB -> PCR[Pin19] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin19] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin20
			PORTB -> PCR[Pin20] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin20] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin21
			PORTB -> PCR[Pin21] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin21] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin22
			PORTB -> PCR[Pin22] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin22] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin23
			PORTB -> PCR[Pin23] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin23] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin24
			PORTB -> PCR[Pin24] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin24] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin25
			PORTB -> PCR[Pin25] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin25] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin26
			PORTB -> PCR[Pin26] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin26] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin27
			PORTB -> PCR[Pin27] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin27] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin28
			PORTB -> PCR[Pin28] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin28] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin29
			PORTB -> PCR[Pin29] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin29] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin30
			PORTB -> PCR[Pin30] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin30] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin31
			PORTB -> PCR[Pin31] &=~(0x00000054);  //Reset Config Parameters
			PORTB -> PCR[Pin31] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
	}
	else if (Port == C){
		SIM->SCGC5 |= PORTC_CLK_MASK;
		//Set pin configuration properties from config.h
		#ifdef Pin0
			PORTC -> PCR[Pin0] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin0] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin1
			PORTC -> PCR[Pin1] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin1] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin2
			PORTC -> PCR[Pin2] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin2] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin3
			PORTC -> PCR[Pin3] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin3] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin4
			PORTC -> PCR[Pin4] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin4] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin5
			PORTC -> PCR[Pin5] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin5] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin6
			PORTC -> PCR[Pin6] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin6] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin7
			PORTC -> PCR[Pin7] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin7] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin8
			PORTC -> PCR[Pin8] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin8] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin9
			PORTC -> PCR[Pin9] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin9] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin10
			PORTC -> PCR[Pin10] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin10] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin11
			PORTC -> PCR[Pin11] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin11] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin12
			PORTC -> PCR[Pin12] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin12] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin13
			PORTC -> PCR[Pin13] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin13] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin14
			PORTC -> PCR[Pin14] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin14] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin15
			PORTC -> PCR[Pin15] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin15] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin16
			PORTC -> PCR[Pin16] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin16] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin17
			PORTC -> PCR[Pin17] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin17] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin18
			PORTC -> PCR[Pin18] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin18] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin19
			PORTC -> PCR[Pin19] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin19] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin20
			PORTC -> PCR[Pin20] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin20] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin21
			PORTC -> PCR[Pin21] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin21] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin22
			PORTC -> PCR[Pin22] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin22] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin23
			PORTC -> PCR[Pin23] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin23] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin24
			PORTC -> PCR[Pin24] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin24] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin25
			PORTC -> PCR[Pin25] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin25] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin26
			PORTC -> PCR[Pin26] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin26] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin27
			PORTC -> PCR[Pin27] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin27] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin28
			PORTC -> PCR[Pin28] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin28] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin29
			PORTC -> PCR[Pin29] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin29] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin30
			PORTC -> PCR[Pin30] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin30] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin31
			PORTC -> PCR[Pin31] &=~(0x00000054);  //Reset Config Parameters
			PORTC -> PCR[Pin31] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
	}
	else if (Port == D){
		SIM->SCGC5 |= PORTD_CLK_MASK;
		//Set pin configuration properties from config.h
		#ifdef Pin0
			PORTD -> PCR[Pin0] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin0] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin1
			PORTD -> PCR[Pin1] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin1] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin2
			PORTD -> PCR[Pin2] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin2] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin3
			PORTD -> PCR[Pin3] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin3] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin4
			PORTD -> PCR[Pin4] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin4] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin5
			PORTD -> PCR[Pin5] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin5] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin6
			PORTD -> PCR[Pin6] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin6] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin7
			PORTD -> PCR[Pin7] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin7] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin8
			PORTD -> PCR[Pin8] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin8] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin9
			PORTD -> PCR[Pin9] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin9] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin10
			PORTD -> PCR[Pin10] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin10] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin11
			PORTD -> PCR[Pin11] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin11] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin12
			PORTD -> PCR[Pin12] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin12] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin13
			PORTD -> PCR[Pin13] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin13] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin14
			PORTD -> PCR[Pin14] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin14] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin15
			PORTD -> PCR[Pin15] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin15] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin16
			PORTD -> PCR[Pin16] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin16] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin17
			PORTD -> PCR[Pin17] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin17] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin18
			PORTD -> PCR[Pin18] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin18] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin19
			PORTD -> PCR[Pin19] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin19] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin20
			PORTD -> PCR[Pin20] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin20] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin21
			PORTD -> PCR[Pin21] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin21] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin22
			PORTD -> PCR[Pin22] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin22] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin23
			PORTD -> PCR[Pin23] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin23] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin24
			PORTD -> PCR[Pin24] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin24] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin25
			PORTD -> PCR[Pin25] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin25] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin26
			PORTD -> PCR[Pin26] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin26] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin27
			PORTD -> PCR[Pin27] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin27] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin28
			PORTD -> PCR[Pin28] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin28] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin29
			PORTD -> PCR[Pin29] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin29] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin30
			PORTD -> PCR[Pin30] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin30] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin31
			PORTD -> PCR[Pin31] &=~(0x00000054);  //Reset Config Parameters
			PORTD -> PCR[Pin31] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
	}
	else if (Port == E){
		SIM->SCGC5 |= PORTE_CLK_MASK;
		//Set pin configuration properties from config.h
		#ifdef Pin0
			PORTE -> PCR[Pin0] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin0] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin1
			PORTE -> PCR[Pin1] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin1] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin2
			PORTE -> PCR[Pin2] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin2] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin3
			PORTE -> PCR[Pin3] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin3] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin4
			PORTE -> PCR[Pin4] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin4] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin5
			PORTE -> PCR[Pin5] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin5] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin6
			PORTE -> PCR[Pin6] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin6] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin7
			PORTE -> PCR[Pin7] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin7] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin8
			PORTE -> PCR[Pin8] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin8] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin9
			PORTE -> PCR[Pin9] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin9] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin10
			PORTE -> PCR[Pin10] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin10] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin11
			PORTE -> PCR[Pin11] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin11] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin12
			PORTE -> PCR[Pin12] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin12] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin13
			PORTE -> PCR[Pin13] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin13] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin14
			PORTE -> PCR[Pin14] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin14] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin15
			PORTE -> PCR[Pin15] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin15] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin16
			PORTE -> PCR[Pin16] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin16] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin17
			PORTE -> PCR[Pin17] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin17] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin18
			PORTE -> PCR[Pin18] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin18] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin19
			PORTE -> PCR[Pin19] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin19] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin20
			PORTE -> PCR[Pin20] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin20] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin21
			PORTE -> PCR[Pin21] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin21] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin22
			PORTE -> PCR[Pin22] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin22] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin23
			PORTE -> PCR[Pin23] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin23] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin24
			PORTE -> PCR[Pin24] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin24] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin25
			PORTE -> PCR[Pin25] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin25] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin26
			PORTE -> PCR[Pin26] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin26] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin27
			PORTE -> PCR[Pin27] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin27] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin28
			PORTE -> PCR[Pin28] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin28] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin29
			PORTE -> PCR[Pin29] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin29] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin30
			PORTE -> PCR[Pin30] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin30] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
		#ifdef Pin31
			PORTE -> PCR[Pin31] &=~(0x00000054);  //Reset Config Parameters
			PORTE -> PCR[Pin31] |= ((DRIVE_STRENGTH<<6)|(PASSIVE_FILTER<<4)|(SLEW_RATE<<2)); //Set config parameters
		#endif
	}
	else{//#Error("Wrong GPIO Port Initialization")				
}
	}

void MGPIO_voidPinControl(uint8_t Port,uint8_t Pin, uint8_t Pull){
	//Set Pin as GPIO 
	if (Port == A){                               //Check Port
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			PORTA -> PCR[Pin] &= ~(7U<<8);            //Reset Pin Mux
			PORTA -> PCR[Pin] |= GPIO_MASK;           //GPIO Mask works only after RESET Pin Mux
			
			if (Pull == PULL_UP){                     //Check Pull Input
				PORTA -> PCR[Pin] |= (1U<<0);           //Enable Pull Mode
				PORTA -> PCR[Pin] |= (1U<<1);           //Select Pull-up
			}
			else if (Pull == PULL_DOWN){             //Check Pull Input
				PORTA -> PCR[Pin] |= (1U<<0);          //Enable Pull Mode
				PORTA -> PCR[Pin] &=~(1U<<1);          //Select Pull-down
			}
			else if (Pull == PULL_OFF){              //Check Pull Input
				PORTA -> PCR[Pin] &=~ (1U<<0);         //Disable Pull Mode
			}
			else{
			//#Error("Wrong Pull Mode Selection")
		  }
	  }
		else{
		//#Error("Wrong Pin Number Entered (Out of Range)")
		}
	}
	
	else if (Port == B){                          //Check Port
		if (Pin >= 0 && Pin <=31){                	//Check Pin Input
			PORTB -> PCR[Pin] &= ~(7U<<8);      	    //Reset Pin Mux
			PORTB -> PCR[Pin] |= GPIO_MASK;           //GPIO Mask works only after RESET Pin Mux
			
			if (Pull == PULL_UP){                	    //Check Pull Input
				PORTB -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTB -> PCR[Pin] |= (1U<<1);   	      //Select Pull-up
				}
			else if (Pull == PULL_DOWN){              //Check Pull Input
				PORTB -> PCR[Pin] |= (1U<<0);   	     //Enable Pull Mode
				PORTB -> PCR[Pin] &=~(1U<<1);   	     //Select Pull-down
				}
			else if (Pull == PULL_OFF){             //Check Pull Input
				PORTB -> PCR[Pin] &=~ (1U<<0);  	    //Disable Pull Mode
			}
			else{
				//#Error("Wrong Pull Mode Selection")
			}
		}
		else{
			//#Error("Wrong Pin Number Entered (Out of Range)")
		}
	}
	else if (Port == C){                            //Check Port
		if (Pin >= 0 && Pin <=31){                	  //Check Pin Input
			PORTC -> PCR[Pin] &= ~(7U<<8);      	      //Reset Pin Mux
			PORTC -> PCR[Pin] |= GPIO_MASK;            //GPIO Mask works only after RESET Pin Mux
			
			if (Pull == PULL_UP){                	     //Check Pull Input
				PORTC -> PCR[Pin] |= (1U<<0);   	       //Enable Pull Mode
				PORTC -> PCR[Pin] |= (1U<<1);   	       //Select Pull-up
				}
			else if (Pull == PULL_DOWN){              //Check Pull Input
				PORTC -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTC -> PCR[Pin] &=~(1U<<1);   	      //Select Pull-down
				}
			else if (Pull == PULL_OFF){               //Check Pull Input
				PORTC -> PCR[Pin] &=~ (1U<<0);  	      //Disable Pull Mode
			}
			else{
				//#Error("Wrong Pull Mode Selection")
			}
		}
		else{
			//#Error("Wrong Pin Number Entered (Out of Range)")
		}
	}
	else if (Port == D){                          //Check Port
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			PORTD -> PCR[Pin] &= ~(7U<<8);      	    //Reset Pin Mux
			PORTD -> PCR[Pin] |= GPIO_MASK;           //GPIO Mask works only after RESET Pin Mux
			
			if (Pull == PULL_UP){                	    //Check Pull Input
				PORTD -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTD -> PCR[Pin] |= (1U<<1);   	      //Select Pull-up
				}
			else if (Pull == PULL_DOWN){              //Check Pull Input
				PORTD -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTD -> PCR[Pin] &=~(1U<<1);   	      //Select Pull-down
				}
			else if (Pull == PULL_OFF){               //Check Pull Input
				PORTD -> PCR[Pin] &=~ (1U<<0);  	      //Disable Pull Mode
			}
			else{
				//#Error("Wrong Pull Mode Selection")
			}
		}
		else{
			//#Error("Wrong Pin Number Entered (Out of Range)")
		}
	}
	else if (Port == E){                          //Check Port
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			PORTE -> PCR[Pin] &= ~(7U<<8);      	    //Reset Pin Mux
			PORTE -> PCR[Pin] |= GPIO_MASK;           //GPIO Mask works only after RESET Pin Mux
			
			if (Pull == PULL_UP){                	    //Check Pull Input
				PORTE -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTE -> PCR[Pin] |= (1U<<1);   	      //Select Pull-up
				}
			else if (Pull == PULL_DOWN){              //Check Pull Input
				PORTE -> PCR[Pin] |= (1U<<0);   	      //Enable Pull Mode
				PORTE -> PCR[Pin] &=~(1U<<1);   	      //Select Pull-down
				}
			else if (Pull == PULL_OFF){               //Check Pull Input
				PORTE -> PCR[Pin] &=~ (1U<<0);  	      //Disable Pull Mode
			}
			else{
				//#Error("Wrong Pull Mode Selection")
			}
		}
		else{
			//#Error("Wrong Pin Number Entered (Out of Range)")
		}
	}	
}

void MGPIO_voidPinDirection (uint8_t Port,uint8_t Pin,uint8_t Direction){
	if (Port == A){                             //Check Port
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			if (Direction == OUTPUT || Direction == INPUT){
				GPIOA -> PDDR &= ~(1<<Pin);         //Reset Pin Direction
				GPIOA -> PDDR |= (Direction<<Pin);  //Set Pin Drecton
			}
			else if (Direction == ANALOG){
				PORTA -> PCR[Pin] &= ~(0x00000703); //Analog Mode (Reset Pull Mode)
			}
			else{
				//#Error("Wrong Direction Input (Choose from macros in interface file)")
			}
		}
		else{
			//#Error("Wrong Pin number entered")
		}
	}
	else if (Port == B){                        //Check Port
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			if (Direction == OUTPUT || Direction == INPUT){
				GPIOB -> PDDR &= ~(1<<Pin);         //Reset Pin Direction
				GPIOB -> PDDR |= (Direction<<Pin);  //Set Pin Drecton
			}
			else if (Direction == ANALOG){
				PORTB -> PCR[Pin] &= ~(0x00000703); //Analog Mode (Reset Pull Mode)
			}
			else{
				//#Error("Wrong Direction Input (Choose from macros in interface file)")
			}
		}
		else{
			//#Error("Wrong Pin number entered")
		}
	}
	else if (Port == C){                        //Check Port
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			if (Direction == OUTPUT || Direction == INPUT){
				GPIOC -> PDDR &= ~(1<<Pin);         //Reset Pin Direction
				GPIOC -> PDDR |= (Direction<<Pin);  //Set Pin Drecton
			}
			else if (Direction == ANALOG){
				PORTC -> PCR[Pin] &= ~(0x00000703); //Analog Mode (Reset Pull Mode)
			}
			else{
				//#Error("Wrong Direction Input (Choose from macros in interface file)")
			}
		}
		else{
			//#Error("Wrong Pin number entered")
		}
	}
	else if (Port == D){                        //Check Port
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			if (Direction == OUTPUT || Direction == INPUT){
				GPIOD -> PDDR &= ~(1<<Pin);         //Reset Pin Direction
				GPIOD -> PDDR |= (Direction<<Pin);  //Set Pin Drecton
			}
			else if (Direction == ANALOG){
				PORTD -> PCR[Pin] &= ~(0x00000703); //Analog Mode (Reset Pull Mode)
			}
			else{
				//#Error("Wrong Direction Input (Choose from macros in interface file)")
			}
		}
		else{
			//#Error("Wrong Pin number entered")
		}
	}
	else if (Port == E){                        //Check Port
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			if (Direction == OUTPUT || Direction == INPUT){
				GPIOE -> PDDR &= ~(1<<Pin);         //Reset Pin Direction
				GPIOE -> PDDR |= (Direction<<Pin);  //Set Pin Drecton
			}
			else if (Direction == ANALOG){
				PORTE -> PCR[Pin] &= ~(0x00000703); //Analog Mode (Reset Pull Mode)
			}
			else{
				//#Error("Wrong Direction Input (Choose from macros in interface file)")
			}
		}
		else{
			//#Error("Wrong Pin number entered")
		}
	}
	else{
		//#Error("Wrong Port input")
	}
}

void MGPIO_voidPinDigitalWrite (uint8_t Port,uint8_t Pin,uint8_t State){
	if (Port == A){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			if (State == HIGH)                        //Check State Input
				GPIOA -> PSOR = 1U<<Pin;                //Set Pin as active
			else if (State == LOW)                    //Check State Input
				GPIOA -> PCOR = 1U<<Pin;                //Clear Pn as inactive
		}
	}
	else if (Port == B){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			if (State == HIGH)                        //Check State Input
				GPIOB -> PSOR = 1U<<Pin;                //Set Pin as active
			else if (State == LOW)                    //Check State Input
				GPIOB -> PCOR = 1U<<Pin;                //Clear Pn as inactive
		}
	}
	else if (Port == C){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			if (State == HIGH)                        //Check State Input
				GPIOC -> PSOR = 1U<<Pin;                //Set Pin as active
			else if (State == LOW)                    //Check State Input
				GPIOC -> PCOR = 1U<<Pin;                //Clear Pn as inactive
		}
	}
	else if (Port == D){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			if (State == HIGH)                        //Check State Input
				GPIOD -> PSOR = 1U<<Pin;                //Set Pin as active
			else if (State == LOW)                    //Check State Input
				GPIOD -> PCOR = 1U<<Pin;                //Clear Pn as inactive
		}
	}
	else if (Port == E){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                  //Check Pin Input
			if (State == HIGH)                        //Check State Input
				GPIOE -> PSOR = 1U<<Pin;                //Set Pin as active
			else if (State == LOW)                    //Check State Input
				GPIOE -> PCOR = 1U<<Pin;                //Clear Pn as inactive
		}
	}
	else
	{/*Error*/}				
}

void MGPIO_voidPinToggle(uint8_t Port,uint8_t Pin){
	if (Port == A){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			GPIOA -> PTOR = 1U<<Pin;             //Toggle Pin
		}
	}		
	else if (Port == B){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			GPIOB -> PTOR = 1U<<Pin;             //Toggle Pin
		}
	}		
	else if (Port == C){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			GPIOC -> PTOR = 1U<<Pin;             //Toggle Pin
		}
	}		
	else if (Port == D){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			GPIOD -> PTOR = 1U<<Pin;             //Toggle Pin
		}
	}		
	else if (Port == E){                          //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			GPIOE -> PTOR = 1U<<Pin;             //Toggle Pin
		}
	}		
	else
	{/*Error*/}
}

uint8_t MGPIO_u8PinDigitalRead (uint8_t Port,uint8_t Pin){
	if (Port == A) {                              //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			return (((GPIOA->PDIR)>>Pin) & (1U));  //Return Pin Value
		}
	}
	else if (Port == B){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			return ((GPIOB -> PDIR)>>Pin &(1U));  //Return Pin Value
		}
	}
	else if (Port == C){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			return ((GPIOC -> PDIR)>>Pin &(1U));  //Return Pin Value
		}
	}
	else if (Port == D){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			return ((GPIOD -> PDIR)>>Pin &(1U));  //Return Pin Value
		}
	}
	else if (Port == E){                               //Check Port Input
		if (Pin >= 0 && Pin <=31){                //Check Pin Input
			return ((GPIOE -> PDIR)>>Pin &(1U));  //Return Pin Value
		}
	}
	else
	{/*Error*/}
  return -1;  //Error Return
}











