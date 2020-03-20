#include <stdio.h>	
/*
	Write a function and find the Manhattan Distance between the two points
	Manhattan Distance is defined as: |x1 - x2| + |y1 -y2|
*/

int manhattan(int x1, int x2, int y1, int y2)
{
	int dx = x1 - x2;
	if (x1 < x2)
		dx = -dx;

	int dy = y1 - y2;
	if (y1 < y2)
		dy = -dy;

	return dx + dy;
}

int main() 
{	
	int res = manhattan(10, 11, 20, 24);
	printf("Result: %d", res);
	return 0;
}
