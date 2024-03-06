/*
 * EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{

    char c;
    DO:
    printf("enter a char:");
    c=getche();
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("\n%c is a vowel",c);
    else
        printf("\n%c is a Constant",c);

    printf("\n\ntype y to repeat '_'\n");
    if(getche()=='y')
    {
        printf("\n");
        goto DO;
    }

}

