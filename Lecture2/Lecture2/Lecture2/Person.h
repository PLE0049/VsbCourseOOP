#pragma once
#include <string>

using namespace std;

class Person
{
private: 
	string name;
	int age;
	Person* parent;

public: 
	Person(string name, int age);
	Person* GetParent();
	void SetParent(Person* p);
	void SetName(string n);
	string GetName();
	void SetAge(int a);
	int GetAge();
};

