#include<iostream>

using namespace std;

void printStars(int n);
void printBlanks(int n);
void printDiamond(int row, int maxRow);

int main()
{
    printDiamond(1,5); //print 5-row version, initialize by passing row 1

    return 0;
}

void printStars(int n) //print the ****
{
    for (int i = 0; i < n; i++)
        cout << "* ";
    cout << endl;
}

void printBlanks(int n) //print the blanks preceding stars
{
    for (int i = 0; i < n; i++)
        cout << " ";
}

void printDiamond(int row, int maxRow)
{
    if (row == maxRow) //base case when we hit the midline
    {
        printStars(row);
        return;
    }
    //printing above the midline/max row
    printBlanks(maxRow - row);  
    printStars(row);
    //recursive call to increase row (until hitting midline/max)
    printDiamond(row + 1, maxRow);
    //print below the midline/max row
    printBlanks(maxRow - row);
    printStars(row);
}