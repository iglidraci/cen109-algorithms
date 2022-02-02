#include <iostream>
#include <cstdlib>
#include "array2d_funcs.h"

using namespace std;

int main () {
    int rows;
    int cols;
    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of cols: ";
    cin >> cols;
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the number in row " << i << " and column " << j <<" :";
            cin >> matrix[i][j];
        } 
    }
    printMatrix((int*)matrix, rows, cols);
    return 0;
}