#include "Grade.h"

Grade::Grade(Student* s, int v)
{
	this->student = s;
	this->value = v;
}

Student* Grade::GetStudent()
{
	return this->student;
}

int Grade::GetValue()
{
	return this->value;
}
