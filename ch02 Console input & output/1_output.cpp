#include <stdio.h>

int main()
{
	// '\n': line feed character
	printf("Hala Madrid! \n");

	// formatting
	// '%d': decimal
	int a = 32;
	int b = 33;
	printf("a: %d \n", a);
	printf("a: %d, b: %d \n", a, b);

	// '%nd': specify width n
	printf("number: %3d OK \n", 3);
	printf("number: %3d OK \n", 33);
	printf("number: %3d OK \n", 333);

	// '%f': float
	double x = 12.34567;
	double y = 90.01;
	printf("x = %f \n", x);
	printf("x = %f, y = %f \n", x, y);

	// '%.nf': specify decimal places
	printf("x is %.2f \n", x);

	return 0;
}
