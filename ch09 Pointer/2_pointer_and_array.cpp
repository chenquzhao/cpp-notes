#include <stdio.h>

int main()
{
	int arr[4] = {1,2,3,4};
	printf("%p", arr); // the array name itself is an address

	int* p1 = arr;
	int* p2 = &arr[0]; // same as the previous line

	// addition and substraction
	// +: move backward n element
	// -: move forward n element
	int* p = arr;
	p += 1; // *p == arr[1]

	// every pointer is an array
	int* pa = &arr[1];
	pa[0] = 0xAA; // num0 from arr[1]: arr[1]
	pa[1] = 0xBB; // arr[2]

	//traverse arrray
	for (int* p = arr; p < arr + 4; p++)
	{
		printf("%d \n", *p);
	}

	return 0;
}
