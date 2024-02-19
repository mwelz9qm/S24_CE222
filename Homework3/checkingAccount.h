#pragma once
#include"bankAccount.h"


class checkingAccount: public bankAccount
{
    private:
    double rate;
    double minBal;
    double charge;

    public:
    void setRate(double r);
    void setMin(double m);
    void setCharge(double c);
    double getMin() const;
    double getCharge() const;
    bool checkBalance() const;
    void writeCheck(double amt);
    void print() const;
    checkingAccount(int num =  0, double b = 0, double r = 0, double m = 0, double c= 0);

};

