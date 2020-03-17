#pragma once
#include "Client.h"
class Account
{
private:
	int number;
	double balance;
	double interestRate;
	static int defaultIr;

	Client* owner;

public:
	Account(int n, Client* c);
	Account(int n, Client* c, double ir);

	static int GetDefaultIr();
	int GetNumber();
	int GetBalance();
	int GetInterestRate();
	Client* GetOwner();
	bool CanWithdraw(double a);

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();

};

