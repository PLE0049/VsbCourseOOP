#pragma once
#include <string>
using namespace std;

class Student
{
private:
	int id;
	string name;
	int age;

public:
	Student(int id, string name, int age);
	int GetId();
	string GetName();
	int GetAge();
};

