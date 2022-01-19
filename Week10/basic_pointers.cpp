#include <iostream>

using namespace std;

int main() {
    int a = 10;
    // declare an int pointer
    int * aPtr;
    aPtr = &a;
    cout << "&a=" << &a << ", aPtr=" << aPtr << endl;
    cout << "a=" << a << ", *aPtr=" << *aPtr << endl;
    cout << "*&aPtr=" << *&aPtr << ", &*aPtr=" << &*aPtr << endl;
    cout << "Memory address of aPtr: " << &aPtr << endl;
    return 0;
}