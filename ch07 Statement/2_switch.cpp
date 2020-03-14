#include <stdio.h>

int main()
{	
	/*
	switch statement (a redundant grammer):
	switch(expr)
	{
	case OPTION_1:
		break;
	case OPTION_2:
		break;
	case OPTION_...:
		break;
	default:
		break;
	}			
	*/

	int choice = 2;
	switch (choice)
	{
	case 1:
		printf("Go to office. \n");
		break;
	case 2:
	case 3:
		printf("Stay at home. \n");
		break;
	default:
		printf("Do nothing. \n"); // no case matched
		break;
	}

	return 0;
}
