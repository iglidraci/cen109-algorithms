#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct card {
    const char *face;
    const char *suit;
};

typedef struct card Card;
void fillDeck (Card * const, const char*[], const char*[]);
void printDeck(const Card*);
void shuffleDeck (Card *);

int main() {
    srand(time(NULL));
    Card deck[CARDS];
    const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
                            "Six", "Seven", "Eight", "Nine", "Ten",
                            "Jack", "Queen", "King"
    };
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    fillDeck(deck, face, suit);
    shuffleDeck(deck);
    printDeck(deck);
    return 0;
}

void fillDeck(Card* const deckOfCards, const char* face[],
                const char * suit[]) {
    for (size_t i = 0; i < CARDS; i++)
    {
        deckOfCards[i].suit = suit[i / FACES];
        deckOfCards[i].face = face[i % FACES];
    }
}

void printDeck(const Card* deck) {
    for (size_t i = 0; i < CARDS; i++)
    {
        printf("%s of %-15s %s", deck[i].face, deck[i].suit, 
                (i+1) % 4 == 0 ? "\n" : " ");
    }
}

void shuffleDeck (Card * deckOfCards) {
    void swapCards(Card*, Card*);
    int card;
    for (size_t i = 0; i < CARDS; i++)
    {
        card = rand() % CARDS; // 0-51
        swapCards(&deckOfCards[i], &deckOfCards[card]);
    }
}

void swapCards(Card *c1, Card *c2) {
    Card temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}