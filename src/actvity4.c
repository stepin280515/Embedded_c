#include "actvity4.h"

/**
 * @brief Initialize usart
 * 
 * @param ubrr_value 
 */



void USART_Init(uint16_t ubrr_value){
    USART_BAUD_PIN_L = ubrr_value;
    USART_BAUD_PIN_H  =SET_BAUD_H;
    USART_CONTROL_PIN_C =SET_CONTROL_PIN_C_8BIT;
    USART_CONTROL_PIN_B = SET_CONTROL_PIN_B;
}

/**
 * @brief write to usart
 * 
 * @param data 
 */

void USART_WriteChar(int data){
    if(data==1){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='0';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else if(data==2){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='5';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else if(data==3){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='9';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else{
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='3';
        USART_DATA_PIN='3';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';

    }

}
