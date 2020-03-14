/*
	Enter a 4-bit integer, break down the ones, tens, hundreds and thousands bits.
	For example:
		giving integer 9527
		output buf[4] = [9,5,2,7]
*/
#include <stdio.h>

int main()
{	
	int num;
	printf("Enter a 4-bit integer: ");
	scanf_s("%d", &num);

	char buf[4] = {};
	buf[3] = num % 10;
	buf[2] = (num / 10) % 10;
	buf[1] = (num / 100) % 10;
	buf[0] = num / 1000;

	printf("%d, %d, %d, %d", buf[0], buf[1], buf[2], buf[3]);
	return 0;
}
