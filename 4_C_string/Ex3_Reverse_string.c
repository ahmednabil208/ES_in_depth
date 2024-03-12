/*
 * Ex3_Reverse_string.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 100
#include<stdio.h>
#include<string.h>
int main()
{
    char name[max_size],reserved[max_size];
    int i=0,len=0,x;

    printf("Enter a string: ");
    gets(name);
    len=strlen(name);
    x=len;

    for(i=0;i<len;i++)
        reserved[i]=name[--x];

    printf("%s",reserved);

}
