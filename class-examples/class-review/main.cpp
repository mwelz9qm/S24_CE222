#include "bankAccount.h"
#include <iostream>

using namespace std;

int main()
{
    bankAccount myAccount;
    cout << "The balance at instantiation: " << myAccount.getBalance() << endl;
    //checking basic functionality
    myAccount.deposit(300);
    cout << "The balance after initial deposit: " << myAccount.getBalance() << endl;
    myAccount.withdrawl(125);
    cout << "The balance after withdrawl: " << myAccount.getBalance() << endl;
    //checking that errors are caught
    //deposit a negative amount 
    myAccount.deposit(-300);
    //withdraw a negative amount
    myAccount.withdrawl(-250);
    //withdraw too much
    myAccount.withdrawl(500);
    return 0;
}