#pragma once
#include <string>
using namespace std;

class User
{
public:
	string email;
	long passwordHash;	
	long HashPassword(string password);

public: 
	User(string email, string password);
	long GetPasswordHash();
};

