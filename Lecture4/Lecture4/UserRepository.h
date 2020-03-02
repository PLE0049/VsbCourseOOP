#pragma once
#include "User.h"

class UserRepository
{
private:
	User** users;
	int size;
	int count;

public:
	UserRepository(int arraySize);
	void AddUser(User* user);
	User* GetUser(string email);
};

