#include "dateType.h"
#include <iostream>

using namespace std;

dateType::dateType(int m, int d, int y) //constructor with default parameters
//getters
{
    setDate(m,d,y);
}
int dateType::getMonth() const
{
    return month;
}
int dateType::getDay() const
{
    return day;
}
int dateType::getYear() const
{
    return year;
}
void dateType::printDate() const
{
    cout << "Date in mm/dd/yyyy form: " << month << "/" << day << "/" << year << endl;
}
void dateType::setDate(int m, int d, int y) //setter
{
    //not checking for errors at the moment but we should
    month = m;
    day = d;
    year = y;

}
