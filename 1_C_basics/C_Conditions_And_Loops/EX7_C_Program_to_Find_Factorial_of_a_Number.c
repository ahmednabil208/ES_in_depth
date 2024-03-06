/*
 * EX7_C_Program_to_Find_Factorial_of_a_Number.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
    int n,fact=1;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<0)
    {
       printf("Error!!! Factorial of a negative number doesn't exist\n");
    }
    else
    {
    for(int i=1;i<n+1;i++)
    {
      fact*=i;
    }
      printf("factorial of %d=%d\n",n,fact);
    }

}


