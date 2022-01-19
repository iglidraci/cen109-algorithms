#include <iostream>
#include <cmath>

using namespace std;
void cubeByReference (int *);

int main() {
    int a = 5;
    cubeByReference(&a);
    cout << a << endl;
    return 0;
}

void cubeByReference (int * ptr) {
    // *ptr = pow(*ptr, 3);
    *ptr = *ptr * *ptr * *ptr;
}