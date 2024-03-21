#pragma once
#include<iostream>

using namespace std;

class matrixType
{
    private:
    double matrix[3][3]; //change to dynamic in the future to handle n x n matrices

    public:
    matrixType();
    matrixType(double m[][3]);
    matrixType operator+(const matrixType &M) const;
    matrixType operator-(const matrixType &M) const;
    matrixType operator*(const matrixType &M) const;
    friend matrixType operator*(double scalar, const matrixType &M);//friend because a scalar/double is on left
    friend matrixType operator/(double scalar, const matrixType &M);//fruebd because a scalar/double is on left
    friend ostream& operator<<(ostream &outObj,const matrixType &M);
    friend istream& operator>>(istream &inObj,matrixType &M);

};
