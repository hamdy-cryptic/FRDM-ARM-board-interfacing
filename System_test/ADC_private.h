/***********************************************************
   File:        Private data for ADC Driver (DO NOT ALTER) *
   Author:      Hamdy Osama Mohamed                        *
   Version:     V01                                        *
   Date:        21/2/2021                                  *
   Updates:     ----                                       *
***********************************************************/

#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

//Macros used in config file (used in program logic)

#define ADC_SHORT   0
#define ADC_LONG    1

#define ADC_A       0
#define ADC_B       1

#define ADC_SW      0
#define ADC_HW      1

//Definitions used for code readability

#define ADC_OFF       (0x0000001F)

#define ADC_CLK_1     (0<<5)
#define ADC_CLK_2     (1<<5)
#define ADC_CLK_4     (2<<5)
#define ADC_CLK_8     (3<<5)

#define ADC_RES_8     (0<<2)
#define ADC_RES_12    (1<<2)
#define ADC_RES_10    (2<<2)
#define ADC_RES_16    (3<<2)

#define COCO_BIT      ((ADC0 -> SC1[0] >>7)& 1)


#endif