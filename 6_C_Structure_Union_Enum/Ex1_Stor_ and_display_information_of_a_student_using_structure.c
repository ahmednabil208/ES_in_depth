#include <stdio.h>
#include <string.h>
// Library where getch() is stored
#include <conio.h>

/*Ex4 Store and display information of a student ysing structure*/

struct SStudent
{
	char name[50];
	int roll;
	float marks;
};


int main()
{
	struct SStudent student;

	printf("Student Name: ");
	fflush(stdin);    fflush(stdout);
	fgets(student.name,50,stdin);
	printf("Enter roll number: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f",&student.marks);

	printf("\nDisplaying information\n");
	printf("=============================\n");
	printf("Name:%sRoll:%d\nMarks:%.2f\n",student.name,student.roll,student.marks);

	return 0;
}
