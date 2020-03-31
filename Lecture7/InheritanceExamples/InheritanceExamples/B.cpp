#include "B.h"

B::B(string name) : A(name)
{
}

string B::GetName()
{
	return A::GetName();
}
