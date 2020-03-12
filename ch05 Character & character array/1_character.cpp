#include <stdio.h>

int main()
{	
	// store character as binary number. (ASCII table)
	char ch1 = 65;
	char ch2 = 'A';
	char ch3 = 0x41;

	printf("%c, %c, %c \n", ch1, ch2, ch3); // all map to 'A'
	printf("%d, %d, %d \n", ch1, ch2, ch3); // all map to 65

	// '\n' -> Enter, '\t' -> Tab, '\"' -> '"', '\\' or 92 -> '\'
	printf("%c%c%c%c", '1', '\t', '2', '\\');

	return 0;
}
