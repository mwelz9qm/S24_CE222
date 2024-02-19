#pragma once
#include"bankAccount.h"


class savingsAccount: public bankAccount
{
    private:
    double rate;

    public:
    void setRate(double r);
    double getRate() const;
    void postInterest(double amt);
    void print() const;
    savingsAccount(int num = 0, double b = 0, double r = 0);
};
