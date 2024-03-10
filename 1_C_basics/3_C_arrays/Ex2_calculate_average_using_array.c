/*
 * Ex2_calculate_average_using_array.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 100
#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,data[max_size];
    printf("Enter the numbers of data<100:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("number[%d]:",i+1);
        scanf("%f",&data[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum+=data[i];
    }
    printf("Average=%f\n",sum/n);
}

