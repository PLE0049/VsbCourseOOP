#pragma once
#include "Client.h"
class Account
{
private:
	int number;
	double balance;
	double interestRate;

	Client* owner;
	Client* partner;
public:
	Account(int n, Client* c);
	Account(int n, Client* c, double ir);
	Account(int n, Client* c, Client* p);
	Account(int n, Client* c, Client* p, double ir);

	int GetNumber();
	int GetBalance();
	int GetInterestRate();
};

