/*
Ask user to input two integers, swap their position and output.
For example:
	input: 101,202
	output: 202,101
*/ 
#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("Please input two integers: ");
	scanf_s("%d,%d", &a, &b);

	printf("The output is: %d,%d", b, a);

	return 0;
}
