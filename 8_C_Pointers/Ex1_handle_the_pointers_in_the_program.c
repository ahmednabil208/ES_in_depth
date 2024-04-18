//Ex1_handle_the_pointers_in_the_program

#include<stdio.h>

int main ()
{
	int m=29;
	printf("Address of m: %X\n",&m);
	printf("VAlue of m: %d\n\n",m);

	int *ab=&m;
	printf("Now ab is addigned with the Address of m.\n");
	printf("Adress of pointer ab: %X\n",ab);
	printf("content of pointer ab: %d\n\n",*ab);

	m=34;
	printf("the value of m assigned to 34 now\n");
	printf("Adress of pointer ab: %X\n",ab);
	printf("content of pointer ab: %d\n\n",*ab);
	*ab=7;

	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m: %X\n",&m);
	printf("VAlue of m: %d\n",m);

	return 0;
}

