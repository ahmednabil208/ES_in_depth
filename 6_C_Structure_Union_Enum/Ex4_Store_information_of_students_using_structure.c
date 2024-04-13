#include <stdio.h>
#include <string.h>
// Library where getch() is stored
#include <conio.h>

/*Ex4 Store information of students using structure*/

struct SStudent
{
	char name[50];
	int roll;
	float marks;
};


int main()
{
	struct SStudent students[10];
	int count=0,i;
	char repeat;
	do
	{
		printf("For roll Number %d\n",count+1);
		printf("Enter student Name: ");
		fflush(stdin);    fflush(stdout);
		fgets(students[count].name,50,stdin);

		printf("Enter marks: ");
		fflush(stdin);    fflush(stdout);
		scanf("%f",&students[count].marks);
		students[count].roll=(count+1);
		count++;

		}while(count < 10 );

		printf("\nRoll\t\tMarks\t\tName\n");
		for(i=0;i<count;i++)
		{
			printf("--------------------------------------------------------------------\n");
			printf("%d\t\t%.2f\t\t%s",students[i].roll,students[i].marks,students[i].name);
		}



	return 0;
}
