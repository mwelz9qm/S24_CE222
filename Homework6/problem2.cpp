#include"bad_dates.h"

int main()
{
    int day, month, year;
    char ch;
    try
    {
    cout << "Enter your birthday in the form month-day-year.  For example, if you're born May 12, 1996, enter 5-12-1996:";
    cin >> month >> ch >> day >> ch >> year;

    if (!cin)
        throw string("Invalid data input!");
    
    if (year < 0 || year > 2023)
        throw invalidYear(year);
    
    if (month < 1 || month > 12)
        throw invalidMonth(month);
    if (day < 1 || day > 31)
        throw invalidDay(day, month);
    else if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9
            || month == 11))
        throw invalidDay(day, month);
    else if (month == 2 && (year % 4 != 0) && day > 28)
        throw invalidDay(day, month);
    else if (month == 2 && (year % 4 == 0) && day > 29)
        throw invalidDay(day,month);
    
    cout << "Your birth date is " << months[month-1] << " " << day << ", " 
    << year <<"."  <<endl;

    }
    catch(invalidYear ex)
    {
        cout << ex.what();
        cout << "The year " << year << " is not between 0 and 2023." << endl;
    }
    catch(invalidMonth ex)
    {
        cout << ex.what();
        cout << "There is no month " << month << " in the year." << endl;
    }
    catch(invalidDay ex)
    {
        cout << ex.what();
        if (month !=2)
        {
            cout << "There is no day " << day << " in " <<months[month-1] << "." << endl;
        }
        else
        {
            cout << "There is no day " << day << " in " <<months[month-1] << " in the year "
            << year << "." << endl;
        }
    }


    return 0;
}