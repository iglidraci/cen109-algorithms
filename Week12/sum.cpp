#include <iostream>
#include "array2d_funcs.h"

#define ROWS 3
#define COLS 3

using namespace std;

int main() {
    int m1[ROWS][COLS] = {
        {2, 3, 4},
        {3, 4, 5},
        {1, 2, 3}
    };
    int m2[ROWS][COLS] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5}
    };
    int* sum = sum_matrices((int*)m1, (int*)m2, ROWS, COLS);
    cout << "The result of sum:" << endl;
    printMatrix(sum, ROWS, COLS);
    return 0;
}