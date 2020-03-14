#include <stdio.h>

int main()
{	
	/*
	for statement:
	for(expr1; expr2;  expr3)
		statement
	*/
	int a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = i + 1;
	}

	// print all even number
	int count = 0;
	for (int j = 0; j < 100; j++)
	{
		if (a[j] % 2)
			continue;
		printf("%d \n", a[j]);
		count++;
	}
	printf("even: %d", count);

	// break: break loop
	// continue: skip one iteration
	return 0;
}
