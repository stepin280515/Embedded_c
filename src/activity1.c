#include <avr/io.h>

void activity1()
{

    DDRB |=(1<<PB0);    //SET TO 1
    DDRD &=(1<<PD0);   //CLEAR BIT
    PORTD |=(1<<PD0);   //SET TO 1
    DDRD &=(1<<PD4);   //CLEAR BIT
    PORTD |=(1<<PD4);    //SET TO 1

}
