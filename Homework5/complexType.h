#pragma once
#include<iostream>

using namespace std;

class complexType
{
    private:
    double real;
    double imaginary;

    public:

    complexType(double r = 0, double i = 0); //constructor
    complexType operator+(const complexType &z) const; //overload +
    complexType operator-(const complexType &z) const; //overload -
    complexType operator*(const complexType &z) const; //overload *
    complexType operator/(const complexType &z) const; //overload /
    bool operator==(const complexType &z) const; //overload ==
    bool operator!=(const complexType &z) const; //overload !=
    friend ostream& operator<<(ostream &outObj, const complexType &z);
    friend istream& operator>>(istream &inObj, complexType &z);
};