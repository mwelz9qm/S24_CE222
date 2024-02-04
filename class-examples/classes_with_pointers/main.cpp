#include<iostream>

using namespace std;

class myClass
{
private:
    int x;
    int *p;

public:

    void display() const;
    myClass(int xval = 0, int pval = 0); //constructor
    myClass(const myClass &otherObject); //copy constructor
    ~ myClass(); //destructor
   //void operator=(const myClass &otherObject); //operator overload
   myClass& operator=(const myClass & otherObject);

};

int main()
{
    int xval,pval;

  
    myClass myObject(2,4);
    myClass myObject2(4,10);
    myClass myObject3;

    myObject.display();
    myObject2.display();
    cout << "The address of my object is " << &myObject2 << endl;
    myObject3 = myObject2 = myObject;
    myObject.display();
    myObject2.display();
    myObject3.display();

    return 0;
}

void myClass::display() const
{
    cout << "The x value is " << x << " the value of our pointer p is  " << p << " and p points to the value " << *p << endl;
 
}

myClass::myClass(int xval, int pval)
{
    x = xval;
    p = new int;
    *p = pval;

}

myClass::myClass(const myClass &otherObject)
{
    x = otherObject.x;
    p = new int;
    *p = *(otherObject.p);
}

// void myClass::operator=(const myClass &otherObject )
// {
//     x = otherObject.x;
//     *p = *(otherObject.p);
// }

myClass& myClass::operator=(const myClass& otherObject) 
{
    if (this != &otherObject)
    {
        x = otherObject.x;
        *p = *(otherObject.p);
    }
    return *this;
}



myClass::~myClass()
{
    delete p;
}