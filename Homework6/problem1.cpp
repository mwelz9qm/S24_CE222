#include<iostream>

using namespace std;

int main()
{
    int divisor, dividend;
    char choice;    


   do
    {cout << "Enter two integers to divide please."  <<endl;
    cout << "Dividend: " << endl;
    cin >> dividend;
    cout << "Divisor:" << endl;
    cin >> divisor;
    try
    {
        if (!cin)
            throw string("Invalid character: not an integer!");
        if (divisor == 0)
            throw divisor;
        cout << "The quotient is: " << dividend/divisor << endl;
    }

    catch (string s)
    {
        cout << s << endl;
        cin.clear();
        cin.ignore(100,'\n');
    }
    catch (int x)
    {
        cout << "Error: Division by " << x << "." << endl;
        
    }
        cout << "Do you want to try again (Y to continue)?";
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
    return 0;
}