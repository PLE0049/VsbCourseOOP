#include "Person.h"

Person::Person(string n, int a)
{
	this->name = n;
	this->age = a;
	this->parent = nullptr;
}

Person* Person::GetParent()
{
	return this->parent;
}

void Person::SetParent(Person* p)
{
	this->parent = p;
}

void Person::SetName(string n)
{
	this->name = n;
}

string Person::GetName()
{
	return this->name;
}

void Person::SetAge(int a)
{
	this->age = a;
}

int Person::GetAge()
{
	return this->age;
}
