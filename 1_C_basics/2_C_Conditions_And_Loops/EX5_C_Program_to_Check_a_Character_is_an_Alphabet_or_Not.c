/*
 * EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.", c);
    }
    else
    {
        printf("%c is not an alphabet.", c);
    }
    return 0;
}


