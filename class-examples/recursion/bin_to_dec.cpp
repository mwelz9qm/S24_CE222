//can also be done by passing d,w by reference
#include<iostream>
#include<cmath>
using namespace std;


int binToDec(int bin, int dec, int weight);

int main()
{
    int b = 10111;
    int d = 0;
    int w = 0;
    cout << "The binary number " << b << " is equivalent to the decimal number " << binToDec(b,d,w) << "." << endl;

    return 0;
}

int binToDec(int bin, int dec, int weight)
{
    if (bin == 0)
            return dec;
        
    
    dec = dec + (bin % 10)*int(pow(2,weight));
    weight ++;
    bin = bin /10;
    return binToDec(bin,dec,weight);

}