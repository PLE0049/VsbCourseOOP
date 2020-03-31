#pragma once
#include <string>

using namespace std;

class A
{
protected:
	string name;
public:
	A(string name);
	string GetName();
	int MyMethod(int i, int a);
	int MyMethod(int i, double a);
	int MyMethod();
};

