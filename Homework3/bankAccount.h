//base class header file

#pragma once

class bankAccount{
    private:
    int accNum;
    double balance;

    public:
    void setAccountNum(int num);
    int getAccountNum() const;
    double getBalance() const;
    void deposit(double d);
    void withdraw(double w);
    void print() const;
    bankAccount(int num = 0, double b = 0);
};





