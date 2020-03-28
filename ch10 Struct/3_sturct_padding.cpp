#include <stdio.h>

struct Object
{
	char a; // -> 1 padding to 4
	int b; // 4
};

int main()
{
	Object object;
	int n = sizeof(object); // 8 instead of 5, compiler padding automatically
	printf("a: %p, b: %p", &object.a, &object.b); // the address difference is 4

	return 0;
}
