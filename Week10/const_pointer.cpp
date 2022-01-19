#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    // non constant pointer to const data
    const int *aPtr = &a;
    aPtr = &b;
    // cannot do this *aPtr = 10;

    // const pointer to const data
    const int *const bPtr = &b;
    // we can only read data, cannot change the pointer, cannot change the value
    // cannot do this bPtr = &a;
    // cannot do this *bPtr = 100;
    // we can only print it
    cout << *bPtr << endl;
    return 0;
} 