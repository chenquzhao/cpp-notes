/*
	Bit operation: converts a positive integer to a binary string.
	For example, 
		135 -> "10000111".
		to_binary(135, buf,  8) -> "10000111"
		to_binary(135, buf,  12) -> "000010000111"
*/
#include <stdio.h>

void to_binary(unsigned int value, char buf[], int num_of_bits)
{
	unsigned int flag = 1u;
	int i = 0;
	for (; i < num_of_bits; i++)
	{
		unsigned int mask = value >> (num_of_bits - i - 1);
		mask &= 1u;
		if (mask)
		{
			buf[i] = '1';
		}
		else
		{
			buf[i] = '0';
		}
	}
	buf[i] = '\0';
}


int main()
{
	char buf[128];
	to_binary(135, buf, 8);

	printf("buf: %s", buf);

	return 0;
}
