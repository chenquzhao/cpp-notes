/*
	Defines a Point Struct that represents a Point. A point has coordinates (x,y).
	Void MoveTo(Point* pt, int x, int y); // move to a new coordinate point
	Int short Point * (pt); // obtain the cumulative distance of the movement of the point (let each movement be in a straight line)
*/

#include <stdio.h>
#include <math.h>

struct Point
{
	int x;
	int y;
	double distance;
};

void Init(Point *pt)
{
	pt->x = 0;
	pt->y = 0;
	pt->distance = 0;
}

void MoveTo(Point* pt, int x, int y)
{
	double dx = x - double(pt->x);
	double dy = y - double(pt->y);
	double xy = sqrt(dx * dx + dy * dy);

	pt->distance += xy;
	pt->x = x;
	pt->y = y;
}

double distance(Point* pt)
{
	return pt->distance;
}

int main()
{
	Point pt;
	Init(&pt);

	MoveTo(&pt, 1, 0);
	MoveTo(&pt, 1, 1);
	printf("Has moved: %.1f", distance(&pt));

	MoveTo(&pt, 0, 0);
	printf("Has moved: %.1f", distance(&pt));

	return 0;
}
