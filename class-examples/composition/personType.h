#pragma once
#include<string>
using namespace std;


class personType
{ 
    private:
        string firstName;
        string lastName;

    public:

        void printInfo() const;
        void setName(string first, string last); //setter
        string getFirstName() const; //getters
        string getLastName() const;
        personType(string first = "Jane", string last = "Doe"); //constructor with default parameters

};