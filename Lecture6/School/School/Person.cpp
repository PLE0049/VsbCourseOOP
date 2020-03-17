#include "Person.h"

Person::Person(string n)
{
	this->name = n;
	this->age = 0;
}

Person::Person(string n, int a)
{
	this->name = n;
	this->age = a;
}

string Person::GetName()
{
	return this->name;
}

int Person::GetAge()
{
	return this->age;
}
