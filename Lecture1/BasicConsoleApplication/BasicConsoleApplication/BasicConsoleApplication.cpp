// BasicConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
/// Sources are based on codes from http://www.cplusplus.com/doc/tutorial

#include <iostream>


int addition(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	int r;
	r = a - b;
	return r;
}

void duplicate(int& a, int& b)
{
	a *= 2;
	b *= 2;
}

int main()
{
    std::cout << "Hello World!\n";

	// Basics
	std::cout << addition(4, 5)  << "\n";
	std::cout << subtraction(4, 5) << "\n";


	int a = 5;
	int b = 8;
	duplicate(a, b);
	std::cout << a << "\n";
	std::cout << b << "\n";


	// Pointers
	int firstvalue = 5, secondvalue = 15;
	int* p1, * p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue

	*p1 = 10;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1

	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 20;          // value pointed to by p1 = 20

	std::cout << "firstvalue is " << firstvalue << '\n';
	std::cout << "secondvalue is " << secondvalue << '\n';

	int foo[] = { 16, 2, 77, 40, 12071 };
	int n, result = 0;

	// Arrays 
	for (n = 0; n < 5; ++n)
	{
		result += foo[n];
	}
	std::cout << result;

	// TODO extract to a method ? 
}