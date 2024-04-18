/*Ex2 print all the alphabets using a pointer*/

#include<stdio.h>

int main ()
{
	char ch='A';
	char *P=&ch;
	int i;

	for(i=0;i<26;i++)
	{
		printf("%c  ",*P);
		++*P;
	}

}