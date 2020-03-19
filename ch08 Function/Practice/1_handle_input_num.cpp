#include <stdio.h>	
/*
	Defines a global array, read user input in the main function, and stores it in the array. 
	Allows to enter decimals.
	Write a function to find the maximum and minimum values of the array.
*/

int st_num[128];
int count = 0;
int max = 0;
int min = 0;

void read_input()
{
	while (1)
	{
		printf("Please input a number: ");
		int num = 0;
		int input = scanf_s("%d", &num); // count numbers of input
		if (input != 1)
		{
			printf("Wrong input! \n");
			break;
		}
		else
		{
			st_num[count] = num;
			count += 1;
		}
	}
}

void max_and_min()
{
	max = min = st_num[0];
	for (int i = 0; i < count; i++)
	{
		if (max < st_num[i])
			max = st_num[i];
		if (min > st_num[i])
			min = st_num[i];
	}
}

int main() 
{	
	read_input();

	printf("---------Print numbers--------- \n");
	for (int i = 0; i < count; i++)
	{
		printf("%d \n", st_num[i]);
	}

	max_and_min();
	printf("Max value: %d, Min value: %d", max, min);

	return 0;
}
