#pragma once
class dateType
{
    private:
        int month;
        int day;
        int year;
    public:
        dateType(int m = 1, int d = 1, int y = 2000); //constructor with default parameters
        //getters
        int getMonth() const;
        int getDay() const;
        int getYear() const;
        void printDate() const;
        void setDate(int m, int d, int y); //setter
};