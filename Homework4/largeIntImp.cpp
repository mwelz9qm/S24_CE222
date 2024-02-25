#include<iostream>
#include<string>
#include"largeInteger.h"

using namespace std;

void largeInteger::setInt(string digits)
{
    length = digits.length();
    if (digits[0] != '0' && isInteger(digits)) //check valid integer string
    {
        delete []num;
        num = new int[length];
        for (int i = 0; i < length; i++)
            num[length - i -1] = digits[i] - '0';
    }
    else
    {
       cout << "Error: Invalid input. Leading '0' or non-digits found." << endl; //error if not
       //num = nullptr;
    }
}

largeInteger::largeInteger() //default constructor
{
    length = 1;
    num = new int[1];
    num[0] = 0;
}

largeInteger::largeInteger(string digits) //paraemter constructor
{
    
    if(digits[0] != '0' && isInteger(digits)) //check input makes sense
    {   length = digits.length();
        num = new int[length];
        for (int i = 0; i < length; i++)
            num[length - i - 1] = digits[i] - '0';
    }
    else
    {
       cout << "Error: Invalid input. Leading '0' or non-digits found." << endl; //error if not
       length = 1;
       num = new int[1];
       num[1] = 0;
    }
}
largeInteger& largeInteger::operator=(const largeInteger &otherObject) //overload the operator
{
    if (this != &otherObject)
    {
           length = otherObject.length;
        delete []num;
        num = new int[length];
        for (int i = 0; i < length; i++)
        {
            num[i] = otherObject.num[i];
        }
    }
    return *this;
}
largeInteger::~largeInteger() //destructor
{
    delete []num;
}

largeInteger::largeInteger(const largeInteger &otherObject) //copy constructor
{
    length = otherObject.length;
    num = new int[length];
    for (int i = 0; i < length; i++)
        num[i] = otherObject.num[i];
}

void largeInteger::print() const
{
    for (int i = 0; i < length; i++)
        cout << num[length - i - 1];
    
}

largeInteger largeInteger::add(const largeInteger &otherObject)
{
    largeInteger sum;   //figure out which is longer then send to adder helper function
    if (length >= otherObject.length)
        sum = addHelper(*this, otherObject);
    else
        sum = addHelper(otherObject,*this);
    return sum;
}

largeInteger largeInteger::addHelper(const largeInteger & bigInt1, const largeInteger & bigInt2)
{
    int carry = 0; //digit to carry when column sum is above 10
    int maxL = bigInt1.length;
    int minL = bigInt2.length;
    string sumString; //store the running sum in this string


    for (int i = 0; i < maxL; i++)
    {
        if (i < minL) //when there are two digits and a carry to add
        {
            sumString += to_string((carry + bigInt1.num[i] + bigInt2.num[i]) % 10);
            carry = (carry + bigInt1.num[i] + bigInt2.num[i]) / 10;
        }
        else //where there is just the carry and a digit from the longer string
        {
            sumString +=  to_string((carry + bigInt1.num[i]) % 10);
            carry = (carry + bigInt1.num[i]) / 10;
            
        }
    }
    sumString = stringReverse(sumString);
    largeInteger sum(sumString);
    return sum;
}

string largeInteger::stringReverse(string str) //helper function to reverse the string
{
    string revStr;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        revStr += str[len - i - 1];
    }
 
    return revStr;
}

bool largeInteger::isInteger(string str) //helper function check if the string is valid
{   
    char ch;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        ch = str[i];   //converting to ascii and checking it's between 0 and 9 on the ascii table
        if ((int) ch < 48 || (int) ch > 57)
            return false;
    }
    return true;
}

largeInteger largeInteger::compare(const largeInteger &otherObject) //return the large of two objects
{
    if (length > otherObject.length)
    {
        return *this;
    }
    else if ( otherObject.length > length)
    {
        return otherObject;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (num[length - i - 1] > otherObject.num[length - i - 1])
                return *this;
            else if (otherObject.num[length - i - 1] > num[length - i - 1])
                return otherObject;
        }
        return *this;
    }
}

largeInteger largeInteger::subtract(const largeInteger &otherObject)
{
    int borrow = 0;
    int colRes;
    string diffstring;
    int minL = otherObject.length;

    for (int i = 0; i < length; i++)
    {
        if (i < minL)
        {
            if ((num[i] - borrow) >= otherObject.num[i])
            {
            diffstring += to_string(num[i] - borrow - otherObject.num[i]);
            borrow = 0;
            }
            else
            {
                diffstring += to_string(num[i] - borrow + 10 - otherObject.num[i]);
                borrow = 1;
            }
        }
        else
        {
            if ((num[i] - borrow) >= 0)
            {
                diffstring += to_string(num[i] - borrow);
                borrow = 0;
            }
            else
            {
            diffstring += to_string(num[i] - borrow + 10);
            borrow = 1;
            }
        }
    }
    cout << "The difference of your integers is: ";
    diffstring = stringReverse(diffstring);
    cout << diffstring << endl;
    int zeroCount = 0;
    while (diffstring[zeroCount] == '0' && zeroCount < length)
    {
        zeroCount++;

    }
   
    if (zeroCount == (length))
    {   largeInteger diff;
        return diff;
    }
    else
    {
        largeInteger diff(diffstring.substr(zeroCount));
        return diff;
    }  

}
