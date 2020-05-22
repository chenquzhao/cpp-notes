/*
	Recall question 5 @ ch07, complete function:
		int who_win(int num_of_players)
		{
			return winner;
			}

	Original question:
	There are N (N=20) people playing the game in a circle, and the rules are as follows:
		Count from one person, count 1,2,3, and the person who calls 3 is out.
		The next person then counts from 1 until only one person is left.
		Who's left?
*/
#include <stdio.h>
#include <stdlib.h>

int who_win(int num_of_players)
{
	char* player = (char*)malloc(sizeof(char) * num_of_players);
	for (int i = 0; i < num_of_players; i++)
	{
		if(player)
			player[i] = i + 1;
	}

	char rule = 2;
	char count = 0;

	while (1)
	{
		count = 0;

		for (int j = 0; j < num_of_players; j++)
		{
			if (player && player[j] == -1)
				continue;

			if (rule == 0)
			{
				player[j] = -1;
				rule = 2;
			}
			else
			{
				rule -= 1;
				count += 1;
			}
		}

		if (count == 1) break;
	}

	for (int k = 0; k < num_of_players; k++)
	{
		if (player && player[k] != -1)
		{
			return player[k];
		}
	}

	return -1;
}

int main()
{
	int player_count;
	printf("Input player amount: ");
	scanf_s("%d", &player_count);

	int winner = who_win(player_count);

	printf("The winner is %d", winner);

	return 0;
}
