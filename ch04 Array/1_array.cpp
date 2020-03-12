#include <stdio.h>

int main()
{
	// define array: element type (char/short/int/cloat/double/...), array name, element amounts
	char arr[5];
	char arr_[5] = {90,91,92,93,94}; // one char map to 1 Byte in storage

	// access to array (read)
	char s1 = arr_[0];
	char s2 = arr_[1];

	// modify value in array
	arr_[1] = 99; // write
	arr_[1] = arr_[0] - 10; // read & write

	return 0;
}
