#ifndef _ACTIVITY(4)_H_
#define _ACTIVITY(4)_H_
#define USART_BAUD_PIN_L (UBRR0L) /**< LSB of BAUD **/
#define USART_BAUD_PIN_H (UBRR0H) /**< MSB of BAUD **/
#define USART_CONTROL_PIN_C (UCSR0C) /**< USART CONTROL PIN C **/
#define USART_MODE_SELECT (UMSEL00) /**< Select Mode of operation **/
#define USART_CONTROL_PIN_B (UCSR0B) /**< USART CONTROL PIN B **/
#define USART_CONTROL_PIN_A (UCSR0A) /**< USART CONTROL PIN A **/
#define ENABLE_USART_DATA_PIN (UDRE0) /**< To enable USART data register **/
#define USART_DATA_PIN (UDR0) /**< Data Register for USART **/
#define SET_BAUD_H ((ubrr_value>>8)&0x0ff)  /**< Set baud value to 9600 **/
#define SET_CONTROL_PIN_C_8BIT ((1<<USART_MODE_SELECT)|(1<<UCSZ01)|(1<<UCSZ00)) /**< Set pin c **/
#define SET_CONTROL_PIN_B ((1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)) /**< Set pin b **/
#define TRANSMITTING_DATA (!(USART_CONTROL_PIN_A&(1<<ENABLE_USART_DATA_PIN))) /**< Writing Data **/


#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize usart
 * 
 * @param ubrr_value 
 */
void USART_Init(uint16_t ubrr_value);

/**
 * @brief write to usart
 * 
 * @param data 
 */

void USART_WriteChar(int data);









#endif
