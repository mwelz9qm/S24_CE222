#pragma once
#include<string>
using namespace std;
class largeInteger
{
    protected:
    int *num;
    int length;
    
    public:
    void setInt(string digits); //set the integer to a giveen value
    void print() const;
    largeInteger(); //default constructor
    largeInteger(string digits);   //parameter constructor
    largeInteger(const largeInteger &otherObject); //copy constructor
    ~largeInteger(); //destructor
    largeInteger add(const largeInteger &otherObject); //return largeInteger object as sum
    largeInteger subtract(const largeInteger &otherObject); //return a largeInteger as difference
    largeInteger& operator=(const largeInteger &otherObject); //overload equal
    largeInteger compare(const largeInteger &otherObject); //return the greater integer

    private:
    largeInteger addHelper(const largeInteger & bigInt1, const largeInteger & bigInt2); //actually does the adding
    string stringReverse(string str); //reverse a string
    bool isInteger(string str); //checks the string input is actually a valid number


};