#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDices();
int getDiceFace();
enum STATUS {CONTINUE, WON, LOST};

int main() {
    srand(time(NULL));
    // int points;
    int sum = throwDices();
    int playersPoints;
    enum STATUS currentStatus = CONTINUE;
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
    // 4, 5, 6, 8, 9, or 10 on first throw then the points become his points
    default:
        currentStatus = CONTINUE;
        playersPoints = sum;
        printf("players current points are %d\n", playersPoints);
        break;
    }
    while (currentStatus == CONTINUE)
    {
        sum = throwDices();
        if (sum == playersPoints) {
            currentStatus = WON;
        }
        else if (sum == 7) {
            currentStatus = LOST;
        }
    }
    if (currentStatus == WON) {
        printf("You won the game\n");
    } else {
        printf("You lost the game\n");
    }
    return 0;
}

int throwDices() {
    int x = getDiceFace();
    int y = getDiceFace();
    printf("You got %d + %d = %d\n", x, y, x+y);
    return x + y;
}

int getDiceFace() {
    return 1 + (rand() % 6);
}