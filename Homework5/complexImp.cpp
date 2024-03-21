#include"complexType.h"

complexType::complexType(double r, double i)
{
    real = r;
    imaginary = i;
}

complexType complexType::operator+(const complexType &z) const
{
    complexType sum;
    sum.real = real + z.real;
    sum.imaginary = imaginary + z.imaginary;
    return sum;
}

complexType complexType::operator-(const complexType &z) const
{
    complexType diff;
    diff.real = real - z.real;
    diff.imaginary = imaginary - z.imaginary;
    return diff;
}
complexType complexType::operator*(const complexType &z) const
{
    complexType prod;
    prod.real = real*z.real - imaginary*z.imaginary;
    prod.imaginary = real * z.imaginary + imaginary * z.real;
    return prod;
}

complexType complexType::operator/(const complexType &z) const
{
    complexType quotient;
    double denom;  //thought it cleaner just to store the c^2+d^2 term separately
    denom = z.real*z.real + z.imaginary*z.imaginary;
    try
    {
        if (denom == 0)
            throw denom;
        quotient.real = (real * z.real + imaginary * z.imaginary)/denom;
        quotient.imaginary = (imaginary*z.real - real * z.imaginary)/denom;
        return quotient;
    }
    catch (double x)
    {
        cout << "Can't divide by " << denom<< ", so just returning 0 by default." <<endl;;
        return quotient;
    }
}

bool complexType::operator==(const complexType &z) const
{
    return (real == z.real && imaginary == z.imaginary);
}
bool complexType::operator!=(const complexType &z) const //just using == to write !=
{
    return(!(*this == z));
}

ostream& operator<<(ostream &outObj, const complexType &z)
{
    outObj << z.real;
    if (z.imaginary > 0)
    outObj << " + " << z.imaginary << "i";
    else if (z.imaginary < 0)
    outObj << " - " << z.imaginary * (-1) << "i";
    return outObj;
}

istream& operator>>(istream &inObj, complexType &z)
{
    char ch;


    inObj >> z.real;
    inObj >> ch;
    inObj >> z.imaginary;
    if (ch == '-')
        z.imaginary = z.imaginary * (-1);
    inObj >> ch;
    
    return inObj;
}