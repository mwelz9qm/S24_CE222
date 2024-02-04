#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::setDimension(double r, double h)
{
    circleType::setDimension(r);
    if (h >= 0)
    height = h;
    else
    height = 0;
}

double cylinderType::volume() const
{
    return 3.1415926 * getRadius() * getRadius() * height;
}

double cylinderType::area() const
{
    return circumference() * height + 2 * circleType::area();
}

double cylinderType::getHeight() const
{
    return height;
}

void cylinderType::printArea() const
{
    cout << "The surface area of your cylinder is " << cylinderType::area() << endl;
}

void cylinderType::printVolume() const
{
    cout << "The volume of your cylinder is " << volume() << endl;
}

cylinderType::cylinderType(double r, double h)
            :circleType(r)
{
    if (h >= 0)
    height = h;
    else
    height = 0;
}