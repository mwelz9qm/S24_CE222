#include"matrixType.h"

int main()
{
    matrixType M;
    double mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout << "Here is the default constructor matrix: " << endl;
    cout << M;
    cout << endl;
    matrixType N(mat);
    cout << "Here is the matrix that I passed to a constructor: " << endl;
    cout << N;
    cout << "Enter in your matrix one row at a time (3 entries for each of 3 rows): " << endl;
    cin >> M;
    cout << "Here is the matrix you just entered: " << endl;
    cout << M;

    cout << "The sum of the two matrices above: " << endl;
    cout << M + N;

    cout << "The difference of the two matrices above: " << endl;
    cout << M - N;

    cout << "The product of the two matrices above: " << endl;
    cout << M * N;

    cout << "Scaling the matrix you just entered by 2: " << endl;
    cout << 2 * M;

    cout << "Scaling the matrix you just entered by 1/2: " << endl;
    cout << 2 / M;



    return 0;
}