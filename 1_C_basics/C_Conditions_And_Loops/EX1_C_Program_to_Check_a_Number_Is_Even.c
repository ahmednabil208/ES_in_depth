/*
 * EX1_Check_Wheather_Number_is_even_or_odd.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
	int num;

REPEAT:
	printf("Number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");
	printf("Do you want to eapeat y,n?\n");

	if(getche()=='y')
	{
		printf("\n");
		goto REPEAT;
	}


}

