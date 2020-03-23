#include <stdio.h>

int main()
{
	int a = 0;

	//const pointer
	const int* p = &a;

	int b = *p; // read only
	//*p = 11; // couldn't write

	return 0;
}
