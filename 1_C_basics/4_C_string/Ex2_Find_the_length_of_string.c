/*
 * Ex2_Find_the_length_of_string.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 100
#include<stdio.h>
#include<string.h>
int main()
{
    char name[max_size];
    int i=0;

    printf("Enter a string:");
    gets(name);

    while(name[i] !=0 )
    {
        i++;
    }

    printf("Length of %s is %d",name,i);
}
