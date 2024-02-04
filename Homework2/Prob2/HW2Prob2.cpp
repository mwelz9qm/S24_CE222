#include<iostream>
#include"cylinderType.h"
using namespace std;

int main()
{
    cylinderType myCyl;

    cout << "Print the initialized stuff for my cylinder " << endl;
    cout << "Radius " << myCyl.getRadius() << endl;
    cout << "Height " << myCyl.getHeight() << endl;
    cout << "Volume " << myCyl.volume() << endl;
    cout << "Surface Area " << myCyl.area() << endl;

    cout << "Now printing for a cylinder of radius 5.5 and height 6.2 " << endl;
    myCyl.setDimension(5.5,6.2);
    cout << "Radius " << myCyl.getRadius() << endl;
    cout << "Height " << myCyl.getHeight() << endl;
    cout << "Volume " << myCyl.volume() << endl;
    cout << "Surface Area " << myCyl.area() << endl;

    cout << "Finally, checking functionality from base class "  << endl;
    cout << "The area of the circular base is " << myCyl.circleType::area() << endl;
    cout << "The circumference of the circular base is " << myCyl.circumference() << endl;

    return 0;
}