#include <stdio.h>

int main()
{	
	// bit manipulation (unsigned char)
	// bitwise NOT: ~
	unsigned char m = 181; 
	unsigned char n = ~m; // 10110101 -> 01001010

		// bitwise AND: &
		// bitwise OR: |
		// bitwise XOR: ^

	// shifts operation: >>, <<
	unsigned char a = 0xA7;
	a >>= 3;
	printf("%d \n", a); // 10100111 -> 00010100

	// Ex. convert X string to number
	char buf[] = "A2";
	unsigned int num1 = buf[0] - 'A' + 10;
	unsigned int num2 = buf[1] - '0';
		// -> Mathematic way
	int res1 = num1 * 16 + num2;

		// -> Shift way
	unsigned int res2 = (num1 << 4) + num2;

	// single bit operation
	unsigned char flag = 181;
	// 1u: 00000001
	// 10110101
	// 00100000 (1u<<5)
	// 11011111 (~(1u<<5)) [mask]
	flag &= ~(1u << 5); // set bit5 to 0
	flag |= (1u << 5); // set bit5 to 1
	flag & (1u << 5); // if bit5 is 1?

	// multiple bit operation
	unsigned char b = 0b10110101; // handle bit2 ~ bit4
	b &= ~(0x07 << 2); // set to 0
	(b >> 2) & 0x07; // read

	return 0;
}
