#include <stdio.h>

int main()
{	
	// type convertion -> data cut/loss (range diff.)
	unsigned char a = 0x1234; // int -> unsigned char 0 ~ 255
	int b = 123.456; // double -> int
	
	double c = 10 + 0.5; // implicit conversion int -> double
	printf("%lf", c);

	int x = 3;
	int y = 10;
	double result = (double)x / y; // explicit conversion

	/*
	priority:
		(1) arithmetic: *, /, +, -
		(2) logic: !, &&, ||
	*/

	return 0;
}
