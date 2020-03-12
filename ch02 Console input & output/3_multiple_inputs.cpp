#include <stdio.h>

int main()
{
	// multiple inputs (normal)
	int a;
	int b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("a = %d, b = %d \n", a, b);

	// multiple inputs (concise)
	int x;
	int y;
	double z;

	scanf_s("%d,%d,%lf", &x, &y, &z); // input must be "x, y, z" in one line
	printf("x = %d, y = %d, z = %lf \n", x, y, z);

	return 0;
}
