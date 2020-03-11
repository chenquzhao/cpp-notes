#include <stdio.h>

int main()
{
	// input integer
	int a;
	printf("Please input an integer: ");
	scanf_s("%d", &a);
	printf("The result is %d \n", a);

	// input long-float(double)
	double d;
	printf("Please input a float: ");
	scanf_s("%lf", &d);
	printf("The result is %lf \n", d);
	
	// Ex. calculate product of 2 floats
	double x;
	double y;

	printf("Please input the first float: ");
	scanf_s("%lf", &x);

	printf("Please input the second float: ");
	scanf_s("%lf", &y);

	printf("The result is %lf \n", x*y);

	return 0;
}
