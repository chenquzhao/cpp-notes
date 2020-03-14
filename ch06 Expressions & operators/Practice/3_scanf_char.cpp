/*
	The following variables are defined:
		unsigned short year;
		unsigned char month;
		unsigned char day;
	write 'scanf' function to acquire user input
*/
#include <stdio.h>

int main()
{	
	// %d -> int, u% -> unsigned int
	unsigned short year;
	unsigned char month;
	unsigned char day;

	int y, m, d;

	printf("Please enter year, month, day: ");
	scanf_s("%d,%d,%d", &y, &m, &d);
	year = (unsigned short) y;
	month = (unsigned char) m;
	day = (unsigned char) d;

	printf("The date is %d/%d/%d", int(year), int(month), int(day));

	return 0;
}
