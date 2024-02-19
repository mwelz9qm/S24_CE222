#include"savingsAccount.h"
#include<iostream>
using namespace std;

void savingsAccount::setRate(double r)
{
    if (r >= 0)
    rate = r;
    else
    rate = 0;
}

double savingsAccount::getRate() const
{
    return rate;  
}

void savingsAccount::postInterest(double amt)
{
   deposit(amt);
}

void savingsAccount::print() const
{
    bankAccount::print();
    cout << "The interest rate is " << rate << endl;
}

savingsAccount::savingsAccount(int num, double b, double r)
                :bankAccount(num, b)
{
    if (r >= 0)
    rate = r;
    else
    rate = 0;
}