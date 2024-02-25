#include"largeInteger.h"
#include<iostream>

int main()
{
    //test constructor initializes to 0
    largeInteger myInt;
    cout << "Printing out basic constructor int: ";
    myInt.print();
    cout << endl;
    cout << "------" << endl;
    //set int
    myInt.setInt("57897");
    cout << "Printing out after set int: " ;
    myInt.print();
    cout << endl;;
    cout << "------" << endl;
    // check copy constructor
    largeInteger myInt2(myInt);
    cout << "Printing out after copy constructor ";
    myInt2.print();
    cout << endl;
    cout << "------" << endl;
    //check overloaded =
    myInt2.setInt("3456790");
    myInt2 = myInt;
    cout << "This checks the overloaded = ";
    myInt2.print();
    cout << endl;
    cout << "------" << endl;
    //this checks it was a deep copy
    myInt2.setInt("1256");
    cout << "Checking deep copy by printing out myInt ";
    myInt.print();
    cout << " and myInt2 ";
    myInt2.print();
    cout << endl;
    cout << "------" << endl;
    largeInteger myInt3;
    myInt3 = myInt2.add(myInt);
    cout << "The sum of ";
    myInt2.print();
    cout << " and ";
    myInt.print();
    cout << " is ";
    myInt3.print();
    cout << endl;
    //checking a subtraction with borrows
    myInt.setInt("320043");
    myInt2.setInt("77615");
    myInt3 = myInt.subtract(myInt2);
    cout << "The difference of ";
    myInt.print();
    cout << " and ";
    myInt2.print();
    cout << " is ";
    myInt3.print();
    cout << endl;
    cout << "------" << endl;
    
    //checking the constructor and setint catch leading 0's or non-digits, by throwing errors
    largeInteger myInt4("04567");
    largeInteger myInt5("123M46");

    myInt.setInt("01234");
    myInt.setInt("123*67");
    cout << "------" << endl;
    //finally, checking that compare returns the large of two ints
    cout << "The largest of ";
    myInt.print();
    cout << " and ";
    myInt2.print();
    cout << " is ";
    (myInt2.compare(myInt)).print();
    cout << endl;

    cout << "------" << endl;
    myInt = myInt2 = myInt3;

    cout << "Checking that I can chain the overloaded = operator together " << endl;
    cout << "Myint: ";
    myInt.print();
    cout << endl;
    cout << "Myint2: ";
    myInt2.print();
    cout << endl;
    cout << "Myint3: ";
    myInt3.print();
    cout << endl;

    return 0;

}