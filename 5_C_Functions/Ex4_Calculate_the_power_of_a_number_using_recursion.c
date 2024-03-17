/*
 *  Ex4_Calculate_the_power_of_a_number_using_recursion
 *
 *  Created on: Mar 13, 2024
 *      Author: Ahmed Nabil
 */

#include<stdio.h>
#include "string.h"

int Power_using_recursion(int number,int power);

int main()
{
	int base,pow;
	printf("Base number:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&base);
	printf("Positive powr number:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&pow);
	printf("%d^%d=%d",base,pow,Power_using_recursion(base,pow));
}

int Power_using_recursion(int number,int power)
{
	static int counter=0;

	if((counter++)==power)
		return 1;
	else
		return number*Power_using_recursion(number,power);
}
