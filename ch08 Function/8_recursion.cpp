#include <stdio.h>	

// Recursion 
// main() -> A() ... -> A() -> A() ...

int factorial(int n)
{
	if (n == 1)
		return 1; // boundary case
	return n * factorial(n - 1);
}

int main() 
{	
	printf("%d \n", factorial(3));
	return 0;
}
