#include <stdio.h>

int main()
{
	// 2-d array: [row][column], each row is seperated by comma
	char arr[5][3] = 
	{
		{91,92,93},
		{81,82,83},
		{71,72,73},
		{61,62,62},
		{51,52,53},
	};

	// access to 2-d array
	char s = arr[0][1]; // row 0, column 1

	// 2-d array is same as 1-d array in storage
	return 0;
}
