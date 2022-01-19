#include <iostream>

using namespace std;

unsigned long long fact (unsigned long);

int main() {
    for (size_t i = 0; i <= 20; i++)
    {
        cout << i<<"! = " << fact(i) << endl;
    }
    return 0;
}

unsigned long long fact (unsigned long a) {
    if (a == 0 || a == 1)// base condition
        return 1;
    return a * fact(a-1); // recursive call
}