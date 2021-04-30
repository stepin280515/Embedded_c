#ifndef _ACTVITY2_H_
#define _ACTVITY2_H_
#include <avr/io.h>
/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void ADC_Init();

/**
 * @brief A function to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC_Value(uint8_t ch);




#endif
