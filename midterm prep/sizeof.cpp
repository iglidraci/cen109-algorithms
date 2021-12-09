#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    int array[] = {1, 3, 4, 5, 10, 12, 13, 14, 15, 16, 14, 14};
    cout << sizeof(int)<<endl;
    cout << sizeof(array) <<endl;
    cout << sizeof(array)/sizeof(int)<<endl;
    cout << sizeof(short)<<endl;
    cout << sizeof(uint8_t)<<endl;
    return 0;
}