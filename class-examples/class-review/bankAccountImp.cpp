#include "bankAccount.h"
#include<iostream>

using namespace std;

bankAccount::bankAccount()
{
    balance = 0;
}

void bankAccount::deposit(double amount)
{
    if (amount > 0)
        balance += amount;
    else
        cout << amount << " is an invalid deposit amount" << endl;
}

void bankAccount::withdrawl(double amount)
{
    if (amount > 0 && balance >= amount)
        balance -= amount;
    else
        cout << amount << " is an invalid withdrawl amount." << endl;
}

double bankAccount::getBalance() const
{
    return balance;
}


