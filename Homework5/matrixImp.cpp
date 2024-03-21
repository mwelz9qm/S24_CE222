#include "matrixType.h"

matrixType::matrixType(double m[][3])
{
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = m[i][j];
}

matrixType::matrixType()
{
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = 0;
}

matrixType matrixType::operator+(const matrixType &M) const
{
    matrixType sum;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum.matrix[i][j] = matrix[i][j] +M.matrix[i][j];
    return sum;
}
matrixType matrixType::operator-(const matrixType &M) const
{
    matrixType diff;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            diff.matrix[i][j] = matrix[i][j] - M.matrix[i][j];
    return diff;
}
matrixType matrixType::operator*(const matrixType &M) const
{
    matrixType prod;
    double rowSum;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            {
            rowSum = 0;
            for (int k = 0; k < 3; k++)
                rowSum = rowSum + matrix[i][k]*M.matrix[k][j];
            prod.matrix[i][j] = rowSum;
            }
    return prod;
}
matrixType operator*(double scalar, const matrixType &M)
{
    matrixType prod;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            prod.matrix[i][j] = scalar * M.matrix[i][j];
    return prod;
}

matrixType operator/(double scalar, const matrixType &M) //still need to check for division by 0
{
    matrixType prod;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            prod.matrix[i][j] = (1/scalar) * M.matrix[i][j];
    return prod;
}

ostream& operator<<(ostream &outObj, const matrixType &M)
{
    for(int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 3; j++)
            outObj<< M.matrix[i][j] << " ";
        outObj << endl;
        }
    return outObj;
}

istream& operator>>(istream &inObj, matrixType &M)
{
    for(int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 3; j++)
        inObj >> M.matrix[i][j];
        }
    return inObj;

}

