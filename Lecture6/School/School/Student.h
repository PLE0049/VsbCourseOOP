#pragma once
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
private:
	string login;
	string studentGroupId;
public:
	Student(string n, string l);
	string GetLogin();
};

