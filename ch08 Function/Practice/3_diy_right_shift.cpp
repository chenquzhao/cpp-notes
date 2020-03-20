#include <stdio.h>	
/*
	Write a function that moves the unsigned char n bits to the right, and the left n bits are 1.
	For example:
		135(2), 10000111
		-> 225, 11100001
*/

unsigned char RightShift(unsigned char n, int num_of_bits)
{
	n >>= num_of_bits;

	unsigned char mask = (1u << num_of_bits) - 1; // 011 (100 - 1)
	mask <<= 8 - num_of_bits; // 11<<6
	n |= mask;
	return n;
}

int main() 
{	
	printf("%u \n", RightShift(135, 2));
	return 0;
}
