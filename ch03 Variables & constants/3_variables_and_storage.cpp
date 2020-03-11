#include <stdio.h>

int main()
{
	/*
	(get/modify) variable <-> (read/write) internal storage 
	1 Byte = 8 bits
	1G = 1000 * 1000 * 1000B
	1M = 1000 * 1000B
	1K = 1000B
	assign label(address) to unit(1 Byte): 00000000 ~ 11111111(0xFF)
	...2 Bytes: 0x0000 ~ 0xFFFF
	...4 Bytes: 0x00000000 ~ 0xFFFFFFFF
	*/

	/*
	char: 1 Byte
	short: 2 Bytes
	int: 4 Bytes
	*/
	printf("char: %d Byte(s) \n", sizeof(char));
	printf("short: %d Byte(s) \n", sizeof(short));
	printf("int: %d Byte(s) \n", sizeof(int));
	
	// analyse variable address
	int a = 0x12345678;
	printf("address: %08X \n", &a); // add checkpoint, press F5 and check automatic window

	a = 0x05050505; // add checkpoint, switch to internal storage window, search '&a' and type F10

	/*
	char types:
	unsigned char: 0 ~ 255
	signed char: -128 ~ 127
	*/ 
	//1100 0110
	unsigned char x = 198;
	char y = -58; // 1-negative, 0-positive

	return 0;
}
