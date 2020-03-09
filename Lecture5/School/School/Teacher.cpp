#include "Teacher.h"

Teacher::Teacher(int id, string name)
{
	this->id = id;
	this->name = name;
}

int Teacher::GetId()
{
	return this->id;
}

string Teacher::GetName()
{
	return this->name;
}
