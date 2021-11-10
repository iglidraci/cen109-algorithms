#include <iostream>
#include <cstdlib>

using namespace std;

int throwDice();
int throwDie();

int main()
{
    // srand(time(NULL));
    const int CONTINUE = 1;
    const int WON = 2;
    const int LOST = 3;
    int points;
    int currentStatus = CONTINUE;
    int sum = throwDice();
    switch (sum)
    {
    case 7:
    case 11:
        currentStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        currentStatus = LOST;
        break;
    default:
        currentStatus = CONTINUE;
        points = sum;
        cout << "Current points "<<points<<endl;
        break;
    }
    while (currentStatus == CONTINUE)
    {
        sum = throwDice();
        if (sum == points)
            currentStatus = WON;
        else if (sum == 7)
            currentStatus = LOST;
    }
    if (currentStatus == WON)
        cout<<"You won the game"<<endl;
    else
        cout<<"You lost the game"<<endl;
    return 0;
}

int throwDice() {
    int firstThrow = throwDie();
    int secondThrow = throwDie();
    int sum = firstThrow + secondThrow;
    cout << "You got "<<sum<<" points"<<endl;
    return sum;
}

int throwDie() {
    int face = 1 + (rand() % 6);
    return face;
}
