#include "Point.h"
#include <cmath>

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::GetX()
{
	return this->x;
}

int Point::GetY()
{
	return this->y;
}

double Point::GetDistanceTo(Point* p)
{
	int xDiff = this->x - p->GetX();
	int yDiff = this->y - p->GetY();
	return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
}
