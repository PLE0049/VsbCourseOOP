// Lecture2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"
#include "Television.h"
#include "Calculator.h"
#include "Person.h"

int Add(int a, int b) 
{
	return a + b;
}

int Subb(int a, int b)
{
	return a - b;
}

int main()
{
    std::cout << "Lecture 2 starts now!\n";
	
	// TODO: Write a calculator functions + and -
	int resultA = Add(5, 2);
	int resultB = Subb(5, 2);
	std::cout << resultA << std::endl;
	std::cout << resultB << std::endl;

	Calculator* calc = new Calculator();
	int resultC = calc->Add(5, 2);
	int resultD = calc->Subb(5, 2);

	std::cout << resultC << std::endl;
	std::cout << resultD << std::endl;

	delete calc;

	std::cout << "Lets create your first class!\n";

	//TODO: Create one simple class - Television
	Television* tv = new Television();

	tv->TurnOn();
	int defaultChannel = tv->GetChannel();
	tv->SetChannel(44);
	int volume = tv->GetVolume();
	tv->SetVolume(10);
	volume = tv->GetVolume();
	tv->TurnOff();

	//TODO: Create one simple class - Person
	Person* pepa = new Person("Pepa", 22);

	//TODO: Add parent to person
	Person* parent = new Person("Parent", 45);

	pepa->SetParent(parent);
	Person* parent2 = pepa->GetParent();
	string parentsName = pepa->GetParent()->GetName();

	// KeyValue example from presentation
	std::cout << "KeyValue example 1 !\n";

	KeyValue* kv1 = new KeyValue(100, 1.5);
	std::cout << kv1->CreateNext(2, 2.5)->GetKey() << std::endl;


	KeyValue* kv2 = kv1->GetNext();
	std::cout << kv2->GetKey() << std::endl;

	// delete kv1;
	// delete kv2;

	std::cout << kv1->GetKey() << std::endl;
	std::cout << kv2->GetKey() << std::endl;

	// TODO: Dictionary
	// Dictionary holds List of KeyValues
	// Has methods as GetByKey and AddKeyValue
	// All keys are unique
}
