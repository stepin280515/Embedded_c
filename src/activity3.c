#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "activity3.h"


/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void TimerWaveGenMode(void){

    SET_TIMER1A_FAST_PWM; //setting timer1 for PWM
    PRESCALE_TIMER_64; //8 prescalar
    SET_PWM_AS_OUTPUT; //Setting PB1 as output pin

}

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 * @param ADC_val 
 * @return char
 */
int outputbyPWM(uint16_t ADC_val)
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
