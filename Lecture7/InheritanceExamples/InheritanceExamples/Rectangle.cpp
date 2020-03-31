#include "Rectangle.h"

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

int Rectangle::GetPerimeter()
{
	return 2*(this->a + this->b);
}
