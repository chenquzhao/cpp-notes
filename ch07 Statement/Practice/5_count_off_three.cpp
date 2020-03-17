/*
	There are N (N=20) people playing the game in a circle, and the rules are as follows:
		Count from one person, count 1,2,3, and the person who calls 3 is out.
		The next person then counts from 1 until only one person is left.
		Who's left?
*/
#include <stdio.h>

int main()
{	
	char player[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	char rule = 2;
	char count = 0;

	while (1)
	{
		count = 0;
		for (int i = 0; i < 20; i++)
		{
			if (player[i] == -1)
				continue;

			if (rule == 0)
			{
				player[i] = -1;
				rule = 2;
			}
			else
			{
				rule -= 1;
				count += 1;
			}
		}

		if (count == 1)
			break;
	}

	for (int j = 0; j < 20; j++)
	{
		if (player[j] != -1)
		{
			printf("Winner: %d", player[j]);
			break;
		}
	}
	return 0;
}
