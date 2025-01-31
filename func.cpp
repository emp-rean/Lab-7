#include "func.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Matrix(short matrix[100][100], short r, short c)
{
for (short i=0; i<r; i++)
    for (short j=0; j<c; j++)
        cin >> matrix[i][j];
}

void MinMax(short matrix[100][100], short r, short c, short min, short max)
{
for (short i=0; i<r; i++)
{
    for (short j=0; j<c; j++)
    {
    if (matrix[i][j] > max)
        {
            max = matrix[i][j];
        }
        if (matrix[i][j] < min)
        {
            min = matrix[i][j];
        }
    }
}
}

void Sum(short sum_max, short sum_min, short min, short max)
{
    while (max > 0)
{
    sum_max += max % 10;
    max /= 10;
}
while (min > 0)
{
    sum_min += max % 10;
    min /= 10;
}
}

void Sort(short matrix[100][100], short r, short c, short sum_max, short sum_min)
{
    if (sum_max - 2 <= sum_min)
{
    short tmp;
    for (short j=0; j<r; j++)
    {
        for (short i=0; i<c-1; i++)
            for (short k=i+1; k<c; k++)
            {
                if (matrix[i][j] > matrix[k][j])
                {
                    tmp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = tmp;
                }
            }
    }
}
}

void Write(short matrix[100][100], short r, short c)
{
    for (short i=0; i<r; i++)
{
    for (short j=0; j<c; j++)
        cout << matrix[i][j] << " ";
cout << endl;
}
}
