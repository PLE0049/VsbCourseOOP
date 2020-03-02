#include "UserRepository.h"

void UserRepository::AddUser(User* user)
{
	this->users[count] = user;
	count++;
}