#include <stdio.h>

int main()
{
	/*
	D: decimal system
	#0,1,2,3,4,5,6,7,8,9
	123 = 1*100 + 2*10 + 3
		= 1*10^2 + 2*10^1 + 3*10^0
	*/
	int d = 123;

	/*
	X(Hex): hexadecimal system
	#0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
	0x123 = 1*16^2 + 2*16^1 + 3*16^0
		  = 291(d)
	0xA2 = A*16^1 + 2*16^0
	     = 162(d)
	*/
	int x = 0x123;

	/*
	B(Bin): binary system
	#0,1
	00000000 = 0(d)
	00000001 = 1(d)
	00001101 = 13(d)
	11111111 = 255(d) = FF(x)
	*/
	int b = 0b1101;

	return 0;
}
