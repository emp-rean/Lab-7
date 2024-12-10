#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // создание матрицы
short matrix[100][100];
short r,c;
cout << "Enter matrix rows and columns: ";
cin >> r >> c;
for (short i=0; i<r; i++)
    for (short j=0; j<c; j++)
        cin >> matrix[i][j];

    // нахождение наибольшего и наименьшего
short max = 0;
short min = 30000;
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

    // нахождение суммы
short sum_max = 0; 
short sum_min = 0; 
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

    // сравнение
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
    // вывод
for (short i=0; i<r; i++)
{
    for (short j=0; j<c; j++)
        cout << matrix[i][j] << " ";
cout << endl;
}
}