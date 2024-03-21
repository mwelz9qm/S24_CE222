#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;
int totalScore = 500;
int numOfTests = 10;

int main()
{
try
{
	if (numOfTests == 0)
		throw 0;
	if (totalScore < 0 || totalScore > 400)
		throw string("Total score is out of range.");
	cout << totalScore / numOfTests << endl;
	cout << "Exiting the try block" << endl;
}
catch (int x)
{
	cout << "Exception: Division by " << x << endl;
}

catch (string str)
{
	cout << str << endl;
}


try
{
    string s = "Hello there!";
    cout << s.substr(10,5);
    cout << s.substr(13,5);
}

catch (out_of_range ex)
{
cout << ex.what() << endl;
}


return 0;
}