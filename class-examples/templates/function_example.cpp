#include<iostream>
#include<string>
#include "complexType.h" //including this so we can swap an object
using namespace std;

//build a function to swap any kind of data type
template <typename T>
void swapT(T &a, T &b);

int main()
{
    int x =5, y =10;
    cout << "x and y before the swap " << x << " and " << y << endl;
    swapT(x,y);
    cout << "x and y after the swap " << x << " and " << y << endl;

    string s1 = "Taco", s2 = "Tuesday";
    cout << "s1 and s2 before the swap " << s1 << " and " << s2 << endl;
    swapT(s1,s2);
    cout << "s1 and s2 after the swap " << s1 << " and " << s2 << endl;

    complexType z1(4,5), z2(2,-3);
    cout << "z1 and z2 before the swap " << z1 << " and " << z2 << endl;
    swapT(z1,z2);
    cout << "z1 and z2 after the swap " << z1 << " and " << z2 << endl;

    return 0;
}
template <typename T>
void swapT(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}