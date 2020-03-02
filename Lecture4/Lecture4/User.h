#pragma once
#include <string>
using namespace std;

class User
{
private:
	string email;
	long passwordHash;	

public: 
	User(string email, string password);
	long HashPassword(string password);
	long GetPasswordHash();
	string GetEmail();
};

