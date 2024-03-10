/*
 * Ex1_Sum_of_2_matricies_2_times_2_using_multi_diamensional_array.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#include<stdio.h>
int main()
{
	float matrix_1[2][2] ,matrix_2[2][2];
	int i,j;
	printf("Enter the items of first matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("number(%d,%d):",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_1[i][j]);
		}
		printf("\n");
	}
	printf("Enter the items of second matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("number(%d,%d):",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_2[i][j]);
		}
		printf("\n");
	}
	/*add to matricies*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			matrix_1[i][j]+=matrix_2[i][j];
		}
	}
	printf("Sum of matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.1f    ",matrix_1[i][j]);
		}
		printf("\n");
	}
}

