#include <stdio.h>	

int number = 0; // global variable: accessed by all functions

void increase(int n)
{
	number += n;
}

int main()
{	
	number = 10;
	increase(1);

	printf("number is %d", number); // number = 11
	return 0;
}
