#include <iostream>

using namespace std;

int main() {
    int i = 9;
    for ( ; ; )
    {
        if (i == 0)
            break;
        cout << i-- + 1 <<endl;
    }
    cout << "Outside of the for loop: " <<endl;
    while (true)
    {
        if (i == 10)
            break;
        cout << ++i <<endl;
    }
    cout << "End of the program" <<endl;
    for (int i = 3; i >= 1; i--)
    {
        switch (i)
        {
            case 1: cout << "1 ";
            case 2: cout << "2 ";
            case 3: cout << "3 ";
        }
    }
    
    return 0;
}