/*
	Ahmed Nabil Sabah
*/
#include "uart.h"

unsigned char myname[100]="Ahmed Nabil :)";
unsigned char const myname2[100]="Ahmed Nabil AbdelRazek:)";

void main(void)
{
	UART0_string_tx(myname);
}