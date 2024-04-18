#include<stdio.h>
#include <string.h>

int main ()
{
	/*Ex3 print a string in reverse using a pointer*/
	char sentence[15];
	char *Ptr_s;
	int i;
	printf("Input a sring: ");
	fflush(stdin);    fflush(stdout);
	fgets(sentence,15,stdin);

	Ptr_s=sentence;

	for(i=strlen(sentence)-1;i>=0;i--)
	{
		printf("%c",*(Ptr_s+i));
	}
}



