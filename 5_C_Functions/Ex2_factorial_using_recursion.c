/*
 *  Ex2_factorial_using_recursion
 *
 *  Created on: Mar 13, 2024
 *      Author: Ahmed Nabil
 */

#include<stdio.h>
#include "string.h"

int fact(int number);

int main()
{
	int num;

Take_Positive_number:
	printf("Enter a positive number:");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&num);
	if(num<0)
		goto Take_Positive_number;
	else
		printf("%d!=%d",num,fact(num));
}
int fact(int number)
{
	if(number==0)
		return 1;
	else
		return number*fact(number-1);
}
