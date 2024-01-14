//Header file for bank account class
//#pragma once
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class bankAccount
{   public:
        bankAccount(); // default constructor -- how would you add one with parameters?
        //setters
        void deposit(double amount);
        void withdrawl(double amount);
        //getter
        double getBalance() const;

    private:
        double balance;
};

#endif