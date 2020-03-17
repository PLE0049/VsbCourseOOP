#include <iostream>
#include "Bank.h"
#include "Client.h"
#include "Account.h"

using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    Bank* bank = new Bank(10, 10);
    bank->CreateClient(1, "Petr");
    Client* c = bank->GetClient(1);
    Account* a = bank->CreateAccount(1, c);
    a->Deposit(5000);
    bool result = a->Withdraw(1500);

}