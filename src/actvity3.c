#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "actvity3.h"
void TimerWaveGenerationMode(void){

    SET_TIMER1A_FAST_PWM; //setting timer1 for PWM
    PRESCALE_TIMER_64; //8 prescalar
    SET_PWM_AS_OUTPUT; //Setting PB1 as output pin

}
int outputfromPWM(uint16_t ADC_val)
{if(ADC_val<=209){

        OCR1A = 205; //20% duty cycle
        _delay_ms(20);
        return 1;
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; //40% duty cycle
        
        _delay_ms(20);
        return 2;
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;//70% duty cycle
          
        _delay_ms(20);

        return 3;
    }
    else{

        OCR1A = 973; //95% duty cycle
        
        _delay_ms(20);

        return 4;
}
}
