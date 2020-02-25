#include "User.h"

long User::HashPassword(string pass)
{
    //  djb2 by Dan Bernstein
    unsigned long hash = 5381;
    int c;

    char* str = &pass[0];
    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

User::User(string email, string password)
{
    this->email = email;
    this->passwordHash = HashPassword(password);
}

long User::GetPasswordHash()
{
    return this->passwordHash;
}
