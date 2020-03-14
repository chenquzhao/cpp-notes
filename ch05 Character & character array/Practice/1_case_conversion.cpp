/*
	Convert an uppercase character to lowercase
	For example:
		'L' -> 'l'
*/
#include <stdio.h>

int main()
{	
	char a;
	printf("Please input an uppercase character: ");
	scanf_s("%c", &a, sizeof(a));
	char b = a + 'a' - 'A';

	printf("Result: %c", b);
	return 0;
}
