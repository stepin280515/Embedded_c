#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRC|=(1<<PC0);
    DDRB&=(1<<PB0);
    PORTB|=(1<<PB0);
    DDRB&=(1<<PB6);
    PORTB|=(1<<PB6);
    while(1)
    {
        if(!(PINB&(1<<PB0)))
        {
            if(!(PINB&(1<<PB6)))
            {
                PORTC|=(1<<PC0);
            }
            else
            {
                PORTC&=~(1<<PC0);
            }
        }
        else
        {
            PORTC&=~(1<<PC0);
        }
    }
    return 0;
}
