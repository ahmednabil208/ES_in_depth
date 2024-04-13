#include <stdio.h>
#include <string.h>
// Library where getch() is stored
#include <conio.h>

/*Find Area of a circle using Macro*/

#define PI (3.1415926)
#define Area_of_circle(radius)  (PI*radius*radius)

int main()
{
	int radius;
	printf("Enter the Radious:");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&radius);
	printf("Area=%.2f\n",Area_of_circle(radius));
	return 0;
}
