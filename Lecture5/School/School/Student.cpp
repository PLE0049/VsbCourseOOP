#include "Student.h"

Student::Student(int id, string name, int age)
{
	this->id = id;
	this->name = name;
	this->age = age;
}

int Student::GetId()
{
	return this->id;
}

string Student::GetName()
{
	return this->name;
}

int Student::GetAge()
{
	return this->age;
}
