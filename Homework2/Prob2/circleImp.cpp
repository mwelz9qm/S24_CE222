#include<iostream>
#include "circleType.h"
using namespace std;


void circleType::setDimension(double r)
{
    if (r >= 0)
    radius = r;
    else
    radius = 0;
}

double circleType::getRadius() const
{
    return radius;
}

double circleType::area() const
{
    return 3.1415926 * radius * radius;
}

double circleType::circumference() const
{
    return 2 * 3.141526 * radius;
}

void circleType::print() const
{
    cout << "Your circle has radius " << radius << endl;
}

circleType::circleType(double r)
{
    if (r >= 0)
    radius = r;
    else
    r = 0;
}