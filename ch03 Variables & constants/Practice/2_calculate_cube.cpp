/*
Ask user to input a float, output its cube (keep two decimal places).
For example:
	input: 12.34
	output: 1879.08
*/ 
#include <stdio.h>

int main()
{
	double a;

	printf("Please input a float: ");
	scanf_s("%lf", &a);

	printf("The cube is: %.2lf", a*a*a);

	return 0;
}
