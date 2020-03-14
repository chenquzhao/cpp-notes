/*
	Find the volume of the cylinder, giving r and h
*/
#include <stdio.h>

int main()
{	
	double r;
	double h;
	scanf_s("%lf,%lf", &r, &h);

	double v = 3.1415 * r * r * h;
	printf("The volume is %lf", v);

	return 0;
}
