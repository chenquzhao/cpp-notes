#include <stdio.h>

int main()
{	
	/*
	while statement:
		while(expr)
			statement
	*/
	char buf[100];
	int i = 0;
	while (i < 100)
	{
		buf[i] = i + 1;
		i++;
	}

	/*
	do while statement:
		do
		{
			statement
		} while(expr);
	*/
	int a = -1;
	do
	{
		printf("Please enter a number: ");
		scanf_s("%d", &a);
	} while (a <= 1 || a >= 100); // keep asking untill input is in (1,100)

	return 0;
}
