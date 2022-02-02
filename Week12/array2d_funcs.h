#include <iostream>
#include <cstdlib>

using namespace std;

// args: matrix, rows, cols
void printMatrix (int*, int, int);
// args: matrix1, matrix2, rows, cols;
int* sum_matrices(int*, int*, int, int);

void printMatrix (int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i*cols + j] << " ";
        }
        cout << endl;
    }
}

int* sum_matrices (int* matrix1, int* matrix2, int rows, int cols) {
    // allocate memory using a single pointer
    int* result = (int*) calloc(rows*cols, sizeof(int));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            result[i*cols + j] = matrix1[i*cols + j] + matrix2[i*cols + j];
        }
    }
    return result;
}