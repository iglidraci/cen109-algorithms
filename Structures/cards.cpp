#include <iostream>

using namespace std;

struct card
{
    char *face;
    char *suit;
};

typedef struct card Card;

int main() {
    struct card aCard = {"Ace", "Spades"};
    struct card *aCardPtr = &aCard;
    Card _3Card = {"Three", "Hearts"};
    cout << aCard.face << endl;
    cout << aCard.suit << endl;
    cout << aCardPtr->face << endl;
    cout << aCardPtr->suit << endl;
    cout << _3Card.face << endl;
    cout << _3Card.suit << endl;
    return 0;
}