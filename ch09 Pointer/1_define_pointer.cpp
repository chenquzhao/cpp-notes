#include <stdio.h>

int main()
{
	// pointer type: int, char, double, float ... (same as pointed variable)
	int a = 10;
	int* p = &a; // pointer

	// (1) p ponits to an integer 'a'
	// (2) the storage corresponding to p is an integer 'a'

	int b = 11;
	p = &b; // p points to 'b'

	// modify variable value(*p == b), visit through address
	*p = 0x11;
	*p = 0x1314;

	return 0;
}
