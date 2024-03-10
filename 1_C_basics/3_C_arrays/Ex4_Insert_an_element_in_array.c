/*
 * Ex4_Insert_an_element_an_array.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 10
#include<stdio.h>
int main()
{
    int numbers[max_size];
    int size,i,insert_num,location;
    
    printf("Enter number of elements:");
    scanf("%d",&size);
    //Store numbers from 1 to size in the array
    for(i=0;i<size;i++)
    {
        numbers[i]=i+1;
    }
    //Display array elemnts
    for(i=0;i<size;i++)
    {
        printf("%d    ",numbers[i]);
    }
    printf("\nEnter the element to be inserted:");
    scanf("%d",&insert_num);
    
    printf("\nEnter the location:");
    scanf("%d",&location);

    for(i=size;i>location;i--)
    {
        numbers[i]=numbers[i-1];
    }
    numbers[location]=insert_num;
    size++;

    for(i=0;i<size;i++)
    {
        printf("%d    ",numbers[i]);
    }
}
