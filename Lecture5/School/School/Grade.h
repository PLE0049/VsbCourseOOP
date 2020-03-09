#pragma once
#include "Student.h"

class Grade
{
private:
	Student* student;
	int value;
public:
	Grade(Student* s, int g);
	Student* GetStudent();
	int GetValue();
};

