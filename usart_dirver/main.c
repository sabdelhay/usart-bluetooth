/*
 * usart_dirver.c
 *
 * Created: 7/23/2024 3:36:56 PM
 * Author : Sherif Abdelhay
*/

#include "usart.h"
#include "lcd_driver.h"

int main(void)
{	
	LCD_init();
	UART_init(9600);
	
	
	unsigned char received;
	LCD_clearScreen();
   while (1)
   {
	   received = UART_receive();
	   LCD_sendChar(received);
   }
}

