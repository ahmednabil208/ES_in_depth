/*
 * Ex3_Find_Transpose_of_matrix.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Ahmed Nabil
 */

#define max_row 10
#define max_col 10

#include<stdio.h>
int main()
{
    int r,c,i,j;
    int data[max_row][max_col],temp[max_row][max_col];
    printf("Enter the numbers of row<100:");
    scanf("%d",&r);

    printf("Enter the numbers of col<100:");
    scanf("%d",&c);

    /*Read the data*/
    for(i=0;i<r;i++)
    {
        printf("Row %d:",i);
        for(j=0;j<c;j++)
        {
            scanf("%d",&data[i][j]);
        }
    }
    /*Transpose*/
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            temp[j][i]=data[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",temp[i][j]);
        }
        printf("\n");
    }

}
