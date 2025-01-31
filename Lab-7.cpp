/*Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. Если суммы цифр минимального и максимального элементов матрицы отличаются
не более, чем на 2, упорядочить столбцы матрицы по неубыванию суммы элементов. */

#include <iostream>
#include "func.hpp"

int main()
{
short matrix[100][100];
short r,c;
std::cout << "Enter matrix rows and columns: ";
std::cin >> r >> c;
Matrix(matrix, r, c);

short max = 0;
short min = 30000;
MinMax(matrix, r, c, min, max);

short sum_max = 0; 
short sum_min = 0; 
Sum(sum_max, sum_min, min, max);
Sort(matrix, r, c, sum_max, sum_min);
Write(matrix, r, c);
}