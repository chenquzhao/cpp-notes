/*
	Define a coordinate Point type, Point, each of which has a member x and y for its coordinates.
	Let the coordinates of the two points on the plane be (x1, y1) (x2, y2), where x1, y1, x2, and y2 are integers.
	Then the definition of Manhattan Distance is: |x1 - x2| + |y1 - y2|
	Write a function to find the direct Distance between two points and Manhattan Distance
*/
#include <stdio.h>
#include <math.h>

struct Point
{
	int x;
	int y;
};

int  ManhattanDistance(const Point* p1, const Point* p2)
{
	int dx = p1->x - p2->x;
	int dy = p1->y - p2->y;

	if (dx < 0)
	{
		dx = -dx;
	}

	if (dy < 0)
	{
		dy = -dy;
	}

	return dx + dy;
}

double  Distance(const Point* p1, const Point* p2)
{
	int dx = p1->x - p2->x;
	int dy = p1->y - p2->y;

	return sqrt((double)dx * dx + dy * dy);
}

int main()
{
	Point p1 = { 10, 11 };
	Point p2 = { 20, 24 };
	int d1 = ManhattanDistance(&p1, &p2);
	double d2 = Distance(&p1, &p2);
	printf("ManhattanDistance: %d, distance: %.2lf \n", d1, d2);

	return 0;
}
