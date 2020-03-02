#pragma once
#include <string>
#include "User.h"

using namespace std;

class Auth
{
private: 

public: 
	Auth(int n);
	bool LogIn(string email, string password);
};

