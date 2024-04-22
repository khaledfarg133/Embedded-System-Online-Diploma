#include "uart.h"
unsigned char string_buffer[100]="learn-in-deapth: <Khaled_Farg>";
unsigned char const string_buffer2[100]="learn-in-deapth: <Khaled_Farg>";

void main (void){

	Uart_Send_String (string_buffer); 

}
