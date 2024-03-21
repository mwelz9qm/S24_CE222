#include"complexType.h"

int main()
{
   complexType z1;
   complexType z2;
   complexType q;
   char op;
   //cout << z1 << endl;
   cout << "Enter two complex numbers in the form a+b i, c+d i or Q to quit" << endl;
   cin >> z1 >> z2;
   cout << "The complex numbers you entered are " << z1 << " and " << z2 << endl;
   while(cin)
   {
        cout << "Enter the operation you'd like to perform on your two complexes. " << endl;
        cin >> op;
        switch(op)
        {
            case '+': 
                cout << "The sum of your numbers is " << z1 + z2 << endl;
                break;
            case '-':
                cout << "The difference of your numbers is " << z1 - z2 << endl;
                break;
            case '*':
                cout << "The product of your numbers is " << z1*z2 << endl;
                break;
            case '/':
                q = z1/z2;
                cout << "The quotient of your numbers is " << q << endl;
                break;
            default:
                cout << "You entered an invalid operation << endl" << endl;
        }
        cout << "Enter two complex numbers in the form a+bi, c+di or Q to quit" << endl;
        cin >> z1 >> z2;
   }

    return 0;
}