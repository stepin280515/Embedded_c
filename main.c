#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    activity1();

    InitADC();
    uint16_t temp;


    while(1){
        if(!(PIND&(1<<PD0)))
            {
                if(!(PIND&(1<<PD4)))
                {
                     temp = ReadADC(0);
                    PORTB |=(1<<PB0);
                    _delay_ms(200);
                }
                else
                {
                PORTB &=~(1<<PB0);
                _delay_ms(200);
                }
            }
        else
            {
            PORTB &=~(1<<PB0);
            _delay_ms(200);
            }
        }


    return 0;
}
