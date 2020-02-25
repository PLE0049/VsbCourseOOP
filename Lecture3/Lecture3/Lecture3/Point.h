#pragma once
class Point
{
private: 
	int x;
	int y;
public: 
	Point(int x, int y);
	int GetX();
	int GetY();
	double GetDistanceTo(Point* p);
};

