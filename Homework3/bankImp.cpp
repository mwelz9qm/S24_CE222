#include<iostream>
#include"bankAccount.h"
using namespace std;


void bankAccount::setAccountNum(int num)
{
    if (num >= 0)  //force nonnegative account num
    accNum = num;
    else
    num = 0;
}

int bankAccount::getAccountNum() const  //get account num
{
    return accNum;
}

double bankAccount::getBalance() const{ //get balance
    return balance;
}

void bankAccount::deposit(double d)  //make deposit -- require legit deposits
{
    if (d >= 0)
    balance = balance + d;
    else
    cout << " Can't have a negative deposit " << endl;
}

void bankAccount::withdraw(double w)  //make withdraw and check withdrawals are legit
{
    if (w >= 0)
    {
        if ((balance - w) >= 0)
        balance = balance - w;
        else 
        cout << "You can't withdraw more than you have in your account " << endl;
    }
    else
    cout << "You can't have a negative withdraw " << endl;

}

void bankAccount::print() const  //basic print function
{
    cout << "Account number: " << accNum << endl;
    cout << "Balance: " << balance << endl;
}



bankAccount::bankAccount(int num, double b) //constructor w/default params
{
    setAccountNum(num);
    if (b >= 0)
    balance = b;
    else
    balance = 0;
}