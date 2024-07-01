#include "uart.h"

#define UART0DR *(( volatile unsigned int * const) ((unsigned int *)0x101f1000) )

void UART0_string_tx(unsigned char *str_p)
{
	while( *str_p != '\0')
	{
		UART0DR =( unsigned int) *str_p ;
		str_p++;
	}
}