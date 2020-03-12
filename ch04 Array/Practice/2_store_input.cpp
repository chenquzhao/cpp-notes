/*
Ask the user to input 3 integers, store them in an array and print them
For example:
	input a number:12
	input a number:34
	input a number:22
	now we have: 12, 34, 22
*/
#include <stdio.h>

int main()
{	
	int num1, num2, num3;
	printf("Input a number: ");
	scanf_s("%d", &num1);

	printf("Input a number: ");
	scanf_s("%d", &num2);

	printf("Input a numebr: ");
	scanf_s("%d", &num3);

	int num[3] = {num1, num2, num3};

	printf("Now we have: %d, %d, %d \n", num[0], num[1], num[2]);

	return 0;
}
