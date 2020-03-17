#include "Account.h"

int Account::defaultIr = 1.2;

int Account::GetDefaultIr()
{
	return Account::defaultIr;
}

Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->interestRate = Account::GetDefaultIr();
	this->balance = 0;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->interestRate = ir;
	this->balance = 0;
}

int Account::GetNumber()
{
	return this->number;
}

int Account::GetBalance()
{
	return this->balance;
}

int Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

bool Account::CanWithdraw(double a)
{
	return this->balance >= a;
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	if(!this->CanWithdraw(a))
		return false;

	this->balance -= a;
	return true;
}

void Account::AddInterest()
{
	this->balance *= this->interestRate;
}
