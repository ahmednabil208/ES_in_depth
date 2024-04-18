#include<stdio.h>
#include <string.h>

/*Ex4 print the elements of an array in reverse*/

#define Max_Size 15
int main ()
{
	int size;
	int i;
	int arr[Max_Size];
	int *ptr=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Elemnt %d: ",i+1);
		fflush(stdin);    fflush(stdout);
		scanf("%d",ptr+i);
	}
	printf("\n=====================================================================\n");
	printf("The elements of array in reverse order are :\n");
	for(i=size-1;i>=0;i--)
		printf("Elemnt %d: %d\n",i+1, *(ptr+i));




}



