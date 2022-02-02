#include <iostream>
#include "array2d_funcs.h"

using namespace std;
#define R1 1 // number of rows in first matrix
#define C1 3 // number of columns in the first matrix
#define R2 3 // number of rows in the second matrix
#define C2 4 // number of columns in the second matrix

int main() {
    int prices[R1][C1] = {3, 4, 2};
    int sales[R2][C2] = {
        {13, 9, 7, 15},
        {8, 7, 4, 6},
        {6, 4, 0, 3},
    };
    int result[R1][C2];
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < C1; k++) {
                result[i][j] += prices[i][k] * sales[k][j];
            }
        }
    }

    cout << "Result of multiplication:" << endl;
    printMatrix((int*)result, R1, C2);
    return 0;
}
