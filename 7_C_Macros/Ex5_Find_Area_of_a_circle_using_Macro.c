#include <stdio.h>
#include <string.h>


/*Ex5 Find Area of a circle using Macro*/

#define PI (3.1415926)

#define Area_of_circle(radius)  (PI*radius*radius)

int main()
{
	float radius;
	printf("Enter the Radious: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f",&radius);
	printf("Area=%.2f\n",Area_of_circle(radius));
	return 0;
}
