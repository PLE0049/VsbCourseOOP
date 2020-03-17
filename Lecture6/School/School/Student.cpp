#include "Student.h"

Student::Student(string n, string l) : Person(n)
{
	this->login = l;
}

string Student::GetLogin()
{
	return this->login;
}
