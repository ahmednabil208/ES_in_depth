/*
 * Swap_Two_Numbers_without_temp_variable.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Ahmed Nabil
 */
#include <stdio.h>

void main()
{
	int x=7;
	int y=3;

	printf("Method1: Using One-linear Arithmetic Operators.\n");
	x=(y-x)+(y=x);
	printf("x=%d\ny=%d",x,y);

	printf("\nmethode2: Using Arithmetic Operators.\n");
	x=x+y;  //x=10   && y=3
	y=x-y;  //x=10   && y=7
	x=x-y;  //x=3    && y=7
	printf("x=%d\ny=%d",x,y);

	printf("\nmethode3: Using Bit-Wise Operators.\n");
	x=x^y;
	y=y^x;
	x=x^y;
	printf("x=%d\ny=%d",x,y);

	printf("\nmethode3: Using One-liner Bit-wise Operators\n");
	x^=y^=x^=y;
	printf("x=%d\ny=%d",x,y);

}


