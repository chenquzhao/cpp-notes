#include <stdio.h>	

// pass value (not variable)
void test(int a)
{
	a += 1;
}

int main()
{	
	int n = 10;
	test(n); // pass value of n to a, recall NOTHING

	printf("n = %d \n", n); // n is 10 instead of 11
	return 0;
}
