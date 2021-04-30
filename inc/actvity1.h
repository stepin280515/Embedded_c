#ifndef _ACTVITY1_H_
#define _ACTVITY1_H_
#include <avr/io.h>


#define SET_LED_AS_OUTPUT DDRB |=(1<<PB0)
#define SET_BUTTON_AS_INPUT DDRD &=(1<<PD0)
#define SET_HEATER_AS_INPUT DDRD &=(1<<PD4)
#define PULL_UP_BUTTON PORTD |=(1<<PD0)
#define PULL_UP_HEATER PORTD |=(1<<PD4)
#define BUTTON_ON !(PIND &(1<<PD0))
#define HEATER_ON !(PIND &(1<<PD4))
#define LED_ON PORTB |=(1<<PB0)
#define LED_OFF PORTB &=~(1<<PB0)

void peripheral_init();

#endif
