#include <stdio.h>

int main()
{	
	/*
	if statement:
	if (expr)
		statement 1
	else
		statement 2
	*/
	int x = 49;
	if (x < 50)
	{
		printf("Fail \n");
	}
	else if (x > 84)
	{
		printf("High Distinction");
	}
	else
	{
		printf("Pass");
	}

	// 1 < x < 10 is not correct, it should be: x > 1 && x < 10
	return 0;
}
