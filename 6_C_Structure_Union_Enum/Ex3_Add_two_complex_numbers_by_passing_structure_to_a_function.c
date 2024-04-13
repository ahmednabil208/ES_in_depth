#include <stdio.h>
#include <string.h>
// Library where getch() is stored
#include <conio.h>

/*Ex3 Add two complex numbers by passing structure to a function */

struct SComplex
{
	float real;
	float img;
};

struct SComplex SumComplex(struct SComplex , struct SComplex);
struct SComplex ReadComplex(char text[]);

int main()
{
	struct SComplex firstnumber,secondnumber,sum;
	firstnumber=ReadComplex("first");
	secondnumber=ReadComplex("second");

	sum=SumComplex(firstnumber,secondnumber);
	printf("Sum=%.3f+%.3fj \n",sum.real,sum.img);

	return 0;
}

struct SComplex SumComplex(struct SComplex num1 , struct SComplex num2)
{
	struct SComplex result;
	result.real=num1.real+num2.real;
	result.img=num1.img+num2.img;
	return result;
}

struct SComplex ReadComplex(char text[])
{
	struct SComplex ComplexNumber;
	printf("For %s complex number\n",text);
	printf("Enter Real and imaginary respectivly: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f %f",&ComplexNumber.real,&ComplexNumber.img);

	return ComplexNumber;
}
