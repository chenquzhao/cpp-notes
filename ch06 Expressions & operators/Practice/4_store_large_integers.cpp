/*
	Convert an unsigned int type integer 0x12345678 to 4 seperate bytes
*/
#include <stdio.h>

int main()
{	
	unsigned int a = 0x12345678;
	unsigned char buf[4];

	buf[0] = a >> 24; // 0x12
	buf[1] = a >> 16; // 0x34
	buf[2] = a >> 8; // 0x56
	buf[3] = a; // 0x78

	return 0;
}
