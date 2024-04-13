#include <stdio.h>


/*Add 2 distances (feet-inch) using structure */
struct Distance
{
	int feet;
	float inch;
};

struct Distance AddDistance(struct Distance , struct Distance );

int main()
{
	struct Distance d1,d2,res;
	printf("Enter first distance in feet and inch respectivly\n");
	fflush(stdin);    fflush(stdout);
	scanf("%d %f",&d1.feet,&d1.inch);
	printf("Enter second distance in feet and inch respectivly\n");
	fflush(stdin);    fflush(stdout);
	scanf("%d %f",&d2.feet,&d2.inch);

    res=AddDistance(d1,d2);
    printf("Sum of distances => %d in feet and -%0.1f inch",res.feet,res.inch);
}

struct Distance AddDistance(struct Distance d1, struct Distance d2)
{
	struct Distance result;
	result.feet=d1.feet+d2.feet;
	result.inch=d1.inch+d2.inch;

	if(result.inch >12.0)
	{
		result.inch -=12.0;
		result.feet++;
	}

	return result;
}
