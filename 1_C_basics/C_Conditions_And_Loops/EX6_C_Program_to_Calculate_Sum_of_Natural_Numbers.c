/*
 * EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
  int n,sum;
  printf("Enter Number:");
  scanf("%d",&n);
  for(int i=1;i<n+1;i++)
  {
      sum+=i;
  }
  printf("Sum=%d\n",sum);
}


