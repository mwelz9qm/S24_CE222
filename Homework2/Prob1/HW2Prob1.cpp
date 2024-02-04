#include <iostream>
#include "lineType.h"
using namespace std;


int main()
{

    double x,y,z;
    lineType myLine, yourLine;

    cout << "Enter a,b,c for my line" << endl;
    cin >> x >> y >> z;
    myLine.setLine(x,y,z);
    cout << "Enter a,b,c for your line" << endl;
    cin >> x >> y >> z;
    yourLine.setLine(x,y,z);
    
    //checking line equality
    if (myLine.isEqual(yourLine))
    cout << "Our lines are equal " << endl;
    else 
    cout << "Our lines aren't equal" << endl;
   
   //checking parallel
    if (myLine.isParallel(yourLine))
    cout << "Our lines are parallel " << endl;
    else 
    cout << "Our lines aren't parallel" << endl;
   //checking perpendicular
    if (myLine.isPerp(yourLine))
    cout << "Our lines are perpendicular " << endl;
    else
    cout << "Our lines aren't perpendicular " << endl;

    //finding intersection
    if (!myLine.isParallel(yourLine))
    cout << "If our lines intersect, it's  at the x-value (nan if they don't):  " << myLine.findIntersect(yourLine) << endl;
    else
    cout << "Our lines are parallel and won't intersect" << endl;


    cout << "The slope of my line is (inf or -inf for vertical): " << myLine.findSlope() << endl;
   
    cout << "The slope of your line is (inf or -inf for vertical): " << yourLine.findSlope() << endl;

    return 0;
}


