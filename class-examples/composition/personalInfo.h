//a class partly composed of dateType and personType objects
#include "personType.h"
#include "dateType.h"


class personalInfo
{public:
    void setPersonalInfo(string first, string last, int m, int d, int y, int ID); //setter
    void printPersonalInfo() const;
    //constructor with default parameters
    personalInfo(string first = "Jane", string last = "Doe", int m = 1, int d = 1, int y = 2000, int ID = 0);

private:
    personType name;
    dateType bDay;
    int personID;
};