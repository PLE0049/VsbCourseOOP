#include "Curve.h"

Curve::Curve(int pointsMaxCount)
{
	this->points = new Point * [pointsMaxCount];
	this->pointsMaxCount = pointsMaxCount;
	this->pointCount = 0;
}

double Curve::GetTotalDistance()
{
	double totalDistance = 0;

	for (int i = 0; i < this->pointCount - 1; i++)
	{
		Point* pA = this->points[i];
		Point* pB = this->points[i+1];

		totalDistance += pA->GetDistanceTo(pB);
	}

	return totalDistance;
}

void Curve::AddPoint(Point* p)
{
	this->points[this->pointCount] = p;
	this->pointCount++;
}
