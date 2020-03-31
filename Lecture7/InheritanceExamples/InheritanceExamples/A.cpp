#include "A.h"

A::A(string name)
{
	this->name = name;
}

string A::GetName()
{
	return this->name;
}

int A::MyMethod(int i, int a)
{
	return 0;
}

int A::MyMethod(int i, double a)
{
	return 0;
}

int A::MyMethod()
{
	return 0;
}
