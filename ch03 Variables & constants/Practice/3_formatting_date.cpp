/*
Ask user to input year, month and day separately, output the date in yyyy-mm-dd format.
For example:
	input year: 1982
	input month: 3
	input day: 3
	output: 1982-03-03
*/ 
#include <stdio.h>

int main()
{
	int year;
	int month;
	int day;

	printf("Please input year: ");
	scanf_s("%d", &year);

	printf("Please input month: ");
	scanf_s("%d", &month);

	printf("Please input day: ");
	scanf_s("%d", &day);

	printf("The date is: %04d-%02d-%02d \n", year, month, day);

	return 0;
}
