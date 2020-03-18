#include <stdio.h>	

/*
	Function:

	return_type name (arguments)
	{
		body
	}
	*/

double area(double r)
{
	double res = 3.14 * r * r;
	return res;
}

int main()
{	
	// invoke function
	double res = area(1.2);
	printf("result: %.3f", res);
	return 0;
}
