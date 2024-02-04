#pragma once

class circleType
{
public:
    void setDimension( double r);
    // function to set the circle dimensions
    // postcondition:   radius is set according to parameters if >= 0
    //                  otherwise they're set to 0
    
    double getRadius() const;
    //function to return the radius of the circle
    // post condition: the value of the radius is returned
    


    double area() const;
    //function to return the area of the circle
    // postcondition: the area is calculated and returned

    double circumference() const;
    //function to return the circumference of the circle
    // postcondition: the circumference is calculated and returned

    void print() const;
    //function to print the radius of the circle
    //postcondition: radius is printed

    circleType(double r = 0);
    //constructor with parameters
    // postcondition: radius =r 

private:
    double radius; // variable to store the radius
};

