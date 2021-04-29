#include <avr/io.h>

void InitADC()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(1<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{
   ADMUX &= 0xf8;
   ch=ch&0b00000111;
   ADMUX |=ch;
   ADCSRA |= (1<<ADSC);
}
