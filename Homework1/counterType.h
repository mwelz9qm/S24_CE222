//counter interface

#pragma once
class counterType
{
private:
    int counter;

public:
    void setCounter(int c);
    int getCounter() const;
    void increment();
    void decrement();
    counterType(int c = 0);
};


