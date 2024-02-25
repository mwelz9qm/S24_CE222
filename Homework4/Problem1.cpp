#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    //setting input/output
    inFile.open("ingrades.txt");
    outFile.open("outgrades.txt");
    char getGrade(double percent);

   

    char **arr;
    int rows = 3; //number of rows to be read in -- can ask for it from user if you want
    const string key = "TTFTTTFFTFFFTFFTTFFT";
    int length = key.length() + 8;

    arr = new char * [rows]; //setting up 2D dynamic array
    for (int i = 0; i < rows; i++)
        arr[i] = new char[length];
    string studentId;

    int score = 0;

    // read in the data to our dynamically allocated arrays
    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < length; j++)
            arr[i][j] = inFile.get();
            
        inFile.ignore(100,'\n');
        }

    //compute and write out scores
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 8; j < length; j++)
        {
            if (arr[i][j] != ' ')
            {
                if (arr[i][j] == key[j-8])
                    score += 2;
                else
                    score += 1;
            }
        }
        for (int j = 0; j < 7; j++ )
            outFile << arr[i][j];
        outFile << " " << score/40.0 * 100 << " " << getGrade(score/40.0 * 100) << endl;
        score = 0;
    }

    
    //deallocating memory
    for (int i = 0; i < rows; i++)
        delete []arr[i];
    
    delete []arr;

    inFile.close();
    outFile.close();
    return 0;
}

char getGrade(double percent)
{
    switch ((int) percent/10){
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }

}