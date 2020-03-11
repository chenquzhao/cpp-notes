#include <stdio.h>

int main()
{
	// define variables: variable type, variable name, initial value
	int a = 10;
	double b = 12.3;

	// integer variable
	char x = 12; // -128 ~ 127
	short y = 1280; // -32768 ~ 32767
	int z = 1280000; // -2147483648 ~ 2147483647

	// D vs X 
	int n1 = 10;
	int n2 = 0x0A;
	printf("n1 = %d, n2 = %d \n", n1, n2);

	int n3 = 0x12345678;
	int n4 = 305419896;
	printf("n3 = %08X, n4 = %08X \n", n3, n4); // print in X
	
	// float-point variable
	float f1 = 12.34f; // 4 bytes
	double f2 = 12.34; // 8 bytes, long float
	printf("f1: %f, f2: %lf", f1, f2);
	
	return 0;
}
