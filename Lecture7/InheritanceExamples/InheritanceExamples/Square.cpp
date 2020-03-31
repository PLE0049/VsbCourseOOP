#include "Square.h"

Square::Square(int a) : Rectangle(a, a)
{
}

int Square::GetPerimeter()
{
	return 4 * this->a;
}
