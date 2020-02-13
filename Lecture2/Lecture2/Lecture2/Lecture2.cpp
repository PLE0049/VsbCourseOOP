// Lecture2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"

int main()
{
    std::cout << "Lecture 2 starts now!\n";
	std::cout << "Lets create your first class!\n";

	//TODO: Create one simple class - Television


	//TODO: Create one simple class - Employe
	
	
	//TODO: Add boss to employe


	// KeyValue example from presentation
	std::cout << "KeyValue example 1 !\n";

	KeyValue* kv1 = new KeyValue(1, 1.5);
	std::cout << kv1->CreateNext(2, 2.5)->GetKey() << std::endl;

	KeyValue* kv2 = kv1->GetNext();
	std::cout << kv2->GetKey() << std::endl;

	// delete kv1;
	// delete kv2;

	std::cout << kv1->GetKey() << std::endl;
	std::cout << kv2->GetKey() << std::endl;
}