#include<iostream>
#include"checkingAccount.h"

using namespace std;


void checkingAccount::setRate(double r)
{
    if (r >= 0)
    rate = r;
    else 
    rate = 0;
}

void checkingAccount::setMin(double m)
{
    if (m >= 0)
    minBal = m;
    else
    minBal = 0;
}

void checkingAccount::setCharge(double c)
{
    if (c >= 0)
    charge = c;
    else
    charge = 0;
}

double checkingAccount::getMin() const
{
    return minBal;
}

double checkingAccount::getCharge() const
{
    return charge;
}
bool checkingAccount::checkBalance() const
{
    return (getBalance() >= minBal);
}

void checkingAccount::writeCheck(double amt)
{
    if (amt > getBalance())
    cout << "You can't write a check for greater than your balance " << endl;
    else
    withdraw(amt);
}

void checkingAccount::print() const
{
    bankAccount::print();
    cout << "Interest rate: " << rate << endl;
    cout << "Minimum balance: " << minBal << endl;
    cout << "Service Charge: " << charge << endl;
}


checkingAccount::checkingAccount(int num, double b, double r, double m, double c)
            :bankAccount(num,b)
{
    if (r >= 0)
    rate = r;
    else rate = 0;

    if (m>= 0)
    minBal = m;
    else
    minBal = 0;

    if (c >= 0)
    charge = c;
    else
    charge = 0;

}