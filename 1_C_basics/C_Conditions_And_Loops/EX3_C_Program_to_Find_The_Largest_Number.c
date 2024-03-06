/*
 * EX3_C_Program_to_Find_The_Largest_Number.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
	float numbers[3],max;
	int i;
	for(i=0;i<3;i++)
    {
        printf("Number[%d]:",i+1);
        scanf("%f",&numbers[i]);
    }
    for(i=0;i<3;i++)
    {
        if(max<numbers[i])
            max=numbers[i];
    }
    printf("Max number is %f",max);

}

