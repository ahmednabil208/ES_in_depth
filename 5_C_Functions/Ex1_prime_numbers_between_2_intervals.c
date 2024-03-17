/*
 *  Ex1_prime_numbers_between_intervals
 *
 *  Created on: Mar 13, 2024
 *      Author: Ahmed Nabil
 */

#include<stdio.h>

int prime(int number);

int main()
{
	int min,max,i;
	printf("Min:");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&min);
	printf("Max:");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&max);
	for(i=min+1;i<max;i++)
	{
		if(prime(i) != 1 && i!=1)
			printf("%d   ",i);
	}
}

int prime(int number)
{
	int i=2,flag=0;

	for( ;i<=number/2;i++)
	{
		if(number%i==0 )
		{
			flag=1;
			break;
		}
	}
	return flag;
}
