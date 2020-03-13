#include <stdio.h>

int main()
{	
	// logic expression: && (and), || (or), ! (not)
	1 && 0; // 0
	2 && -1; // 1
	1 || 0; // 1
	0 || 0; // 0
	!18; // 0
	!0; // 1

	// comma expression: expr1, expr2, expr3 ... (acquire the last expr value)
	int a = (12, !3, 4);
	printf("%d", a);

	return 0;
}
