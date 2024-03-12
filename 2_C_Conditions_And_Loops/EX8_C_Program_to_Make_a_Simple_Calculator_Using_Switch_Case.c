/*
 * EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */

#include <stdio.h>
int main(int argc, char **argv)
{
    float num1,num2;
    float res;
    char op;
    printf("Number1:");
    scanf("%f",&num1);
    printf("Operator:");
    op=getche();
    printf("\n");
    printf("Number2:");
    scanf("%f",&num2);
    switch(op)
    {
    case '+':
        res=num1+num2;
        break;
    case '-':
        res=num1-num2;
        break;
    case '*':
        res=num1*num2;
        break;
    case '/':
        res=(float)num1/num2;
        break;
    }
    printf("%4.2f%c%4.2f=%4.2f\n",num1,op,num2,res);
}


