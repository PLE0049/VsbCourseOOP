#pragma once
#include "Point.h"

class Curve
{
private:
	Point** points;
	int pointsMaxCount;
	int pointCount;
public:
	Curve(int pointsMaxCount);
	double GetTotalDistance();
	void AddPoint(Point* p);
};

