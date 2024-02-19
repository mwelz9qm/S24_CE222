#include<iostream>
#include"checkingAccount.h"
#include"savingsAccount.h"

using namespace std;

int main()
{
    checkingAccount myCheck(159,10500);

    cout << "Initial checking account settings are:" << endl;
    myCheck.print();
    
    myCheck.setCharge(50);
    myCheck.setMin(5000);
    myCheck.setRate(3.2);
    myCheck.setAccountNum(468);
    cout << "New checking account settings are:" << endl;
    myCheck.print();

    myCheck.writeCheck(750);
    myCheck.deposit(400);
    myCheck.withdraw(1000);

    cout << "After depositing, withdrawing, and writing a check" << endl;
    myCheck.print();

    cout << "Am I over the min balance (1 = yes, 0 = no): " << myCheck.checkBalance() << endl;

    myCheck.writeCheck(5000);
    cout << "Am I over the min balance (1 = yes, 0 = no): " << myCheck.checkBalance() << endl;

    //write a bad check
    myCheck.writeCheck(10000);

    //make a bad withdrawl

    myCheck.withdraw(100000);

    // now check savings

    savingsAccount mySave(235,17500);
    cout << "Initial savings account settings are: " << endl;
    mySave.print();

    mySave.setRate(7);
    mySave.postInterest(650);
    mySave.deposit(1000);
    mySave.withdraw(4000);
    mySave.setAccountNum(999);

    cout << "Savings account settings after testing functions out: " << endl;
    mySave.print();

    return 0;
}