#include <stdio.h>	
/*
	Determine whether a number is the number of daffodils.
	The so-called daffodil number refers to a three-digit number, in the range of 100 to 999.
	if the cube of its digits sum equal to the number itself, it is called the daffodil number.
	For example: 153 = 1 * 1 * 1 + 5 + 5 * 5 * 3 * 3 * 3
*/

int is_daffodils(int n)
{
	int sum = 0;
	int t = n;

	while (t)
	{
		int r = t % 10;
		sum += r * r * r;

		t /= 10;
	}
	return sum == n;
}

int main() 
{	
	for (int i = 0; i <= 1000; i++)
	{
		if (is_daffodils(i))
		{
			printf("%d \n", i);
		}
	}

	return 0;
}
