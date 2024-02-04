#include "lineType.h"
#include<iostream>
using namespace std;

void lineType::setLine(double x, double y, double z)
{
    if (x == 0 and y == 0) //check that the line is actually a line
    {
        cout << "Your a and b are both 0, and hence it's not a line" << endl;
        cout << "Enter all three of your coefficients again. " << endl;
        cin >> x >> y >> z;
    }
    a = x;
    b = y;
    c = z;
}

double lineType::findSlope() const //returns inf or -inf for vertical lines
{
//assert (b != 0 && "b is 0, hence your line is vertical"); //check that your line actually has slope

 return -a/b;

}

bool lineType::isEqual(const lineType &yourLine) const
{
    double ratio;

    if (a != 0)             //find which coefficient of the line is nonzeo, find the rato with the other line
    {                       //and check that ratio holds
        ratio = yourLine.a / a;
        if ((yourLine.b == ratio * b) && (yourLine.c == ratio * c))
        return true;
        else
        return false;
    }
    else
    {
        ratio = yourLine.b /b;
        if ((yourLine.a == ratio * a) && (yourLine.c == ratio * c))
        return true;
        else
        return false;
    }
} 

bool lineType::isParallel(const lineType &yourLine) const
{
    if (isEqual(yourLine))
    return false;

    if ((b == 0)|| (yourLine.b ==0))      //treating vertical line case
    {
        if ((b == 0) && (yourLine.b == 0))
        return true;
        else
        return false;
    }


    if (-a/b == yourLine.findSlope())
    return true;
    else
    return false;
}

bool lineType::isPerp(const lineType &yourLine) const
{
    if (b == 0 && yourLine.a == 0) //first two IFs cover horizontal and vertical lines
    return true;
    else if (a == 0 && yourLine.b == 0)
    return true;
    else if (-a/b * yourLine.findSlope() == -1) //usual way lines are perpendicular
    return true; 
    else
    return false;
}

double lineType::findIntersect(const lineType &yourLine) const
{
   // assert ((! isEqual(yourLine) && !isParallel(yourLine)) && "Your lines are equal or parallel so won't intersetct"); 
    return (-c * yourLine.b + yourLine.c * b) / (-a * yourLine.b + yourLine.a * b);

}


lineType::lineType(double x, double y, double z)
{
    setLine(x,y,z);
}