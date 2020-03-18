/*
	Print a n*n upper triangle array
*/
#include <stdio.h>

int main()
{
	char n = 10;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
