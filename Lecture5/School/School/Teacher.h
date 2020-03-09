#pragma once
#include <string>

using namespace std;

class Teacher
{
private:
	int id;
	string name;

public:
	Teacher(int id, string name);
	int GetId();
	string GetName();
};

