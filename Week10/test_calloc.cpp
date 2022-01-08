#include <iostream>

using namespace std;

void pattern(int*, int);

int main() {
    int total;
    cout << "enter the number of int blocks you want to allocate:";
    cin >> total;
    int* a = (int*) calloc(total, sizeof(int));
    cout << "Inside the main function" <<endl;
    // size_t is unsigned long
    for (size_t i = 0; i < total; i++)
    {
        cout << *(a+i) <<endl;
    }
    pattern(a, total);
    cout << "Inside the main after calling pattern function" <<endl;
    for (size_t i = 0; i < total; i++)
    {
        cout << *(a+i) <<endl;
    }
    return 0;
}

void pattern(int * ptr, int total) {
    cout << "Inside the pattern function we will change each element in the "
            << "block memory into 2" <<endl;
    for (size_t i = 0; i < total; i++)
    {
        *(ptr+i) = 2;
        // ptr[i] = 2;
    }
}