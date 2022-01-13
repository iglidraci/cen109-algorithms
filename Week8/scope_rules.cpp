#include <iostream>

using namespace std;

void useLocal();
void useStatic();
void useGlobal();

// declare a global variable
int x = 10;

int main() {
    cout << "First print of x: " << x << endl;
    int x = 5; //local variable to main
    cout << "Local x in the outer scope of main: " << x << endl;
    {
        // new local variable in a new scope
        int x = 3;
        cout << "Local x in the inner scope of main: " << x << endl;
    }
    cout << "Local x in the outer scope of main: " << x << endl;
    useLocal();
    useStatic();
    useGlobal();

    useLocal();
    useStatic();
    useGlobal();

    cout << "Local x in the outer scope of main: " << x << endl;
    return 0;
}

void useLocal() {
    int x = 1;
    cout << "x inside useLocal(): " << x++ <<endl;
    cout << "x inside useLocal(): " << x <<endl;
}

void useStatic() {
    static int x = 20;
    cout << "x inside useStatic(): " << ++x << endl;
    cout << "x inside useStatic(): " << x++ << endl;
}

void useGlobal() {
    cout << "x inside useGlobal(): " << x++ << endl;
    cout << "x inside useGlobal(): " << x << endl;
}