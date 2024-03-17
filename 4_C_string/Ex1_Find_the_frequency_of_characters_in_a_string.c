/*
 * Ex1_Find_the_frequency_of_characters_in_a_string.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_size 100
#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[max_size],c;
    int i=0,counter=0;
    printf("Enter a string:");
    fflush(stdin);  fflush(stdout);
    gets(sentence);

    printf("Enter a character to find frequency:");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&c);

    while(sentence[i] != '\0')
    {
       if(sentence[i]==c)
       {
           counter++;
       }
       i++;
    }

    printf("\nFrequency of %c =%d" ,c,counter);

}
