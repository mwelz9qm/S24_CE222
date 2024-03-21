#pragma once
#include <stdexcept>
#include<string>
#include<iostream>
using namespace std;

//just built as a small inline class -- fine as a .h file or .cpp file
const string months[12] = {"January","February","March","April","May","June","July","August", "September",
"October","November","December"};

class invalidDay : public exception
{
    public:
    int day;
    int month;
    int year;
    string what();
    invalidDay(int d = 1, int m = 1, int y =2023): day(d), month(m), year(y) {};
} ;
class invalidMonth : public exception
{
    public:
    int month;
    string what();
    invalidMonth(int m = 1): month(m) {};
} ;

class invalidYear : public exception
{
    public:
    int year;
    string what();
    invalidYear(int y = 2023): year(y) {};
} ;

string invalidDay::what()
{
    return "Invalid Day Error: ";
}

string invalidMonth::what()
{
    return "Invlaid Month Error: ";
}

string invalidYear::what()
{
    return "Invalid Year Error: ";
}