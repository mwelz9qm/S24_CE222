#pragma once
#include"circleType.h"

class cylinderType: public circleType
{
    private:
    double height;

    public:
    void setDimension(double r, double h);
    double getHeight() const;
    void printVolume() const;
    void printArea() const;
    double volume() const;
    double area() const;
    cylinderType(double r = 0, double h = 0);
};

