#define F_CPU 16000000UL
#include "actvity1.h"
#include "actvity2.h"
#include "actvity3.h"
#include "actvity4.h"

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
    peripheral_init(); //Initialise the button input registers
    ADC_Init(); //Initialise the ADC
    TimerWaveGenerationMode(); // Initialise timer
    uint16_t temp;
    int d;

    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
       if(BUTTON_ON & HEATER_ON)
       {
                _delay_ms(2000);
                LED_ON; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC_Value(0);
                d=outputfromPWM(temp);
                _delay_ms(20);
                USART_Init(103);
            USART_WriteChar(d);
            
                
            }
            else
            {
            
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                LED_OFF; // make led off*/
            }
        
    }

 return 0;   
}
