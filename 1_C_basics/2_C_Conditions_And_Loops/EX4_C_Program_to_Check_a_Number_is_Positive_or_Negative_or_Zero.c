/*
 * EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
	float number;
	printf("Number:");
	scanf("%f",&number);
	if(number>0)
        printf("Positive\n");
    else if(number==0)
        printf("Zero\n");
    else if(number<0)
        printf("Negative\n");
}

