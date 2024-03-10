/*
 * Ex5_Search_an_element_in_array.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 10
#include<stdio.h>
int main()
{
    int arr[max_size];
    int element,i,size;

    printf("Enter number of elements:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Number:");
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched:");
    scanf("%d",&element);

    for(i=0;i<size;i++)
    {
        if(element==arr[i])
        {
             printf("number found at the location %d\n",i+1);
             break;
        }
    }
}
