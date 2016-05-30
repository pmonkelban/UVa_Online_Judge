/*
 * 555 - Bridge Hands
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


struct Card {
    char suitAsChar;
    char rankAsChar;
};

struct Hand {
    char direction;
    Card cards[13];
};


int suitToInt(char c) {

    switch (c) {
        case 'C':
            return 0;
        case 'D':
            return 1;
        case 'S':
            return 2;
        case 'H':
            return 4;
        default:
            return -1;
    }
}

int rankToInt(char c) {

    switch (c) {
        case 'T':
            return 10;
        case 'J':
            return 11;
        case 'Q':
            return 12;
        case 'K':
            return 13;
        case 'A':
            return 14;
        default:
            return c - '0';
    }
}

bool sortCard(const Card &c1, const Card &c2) {

    int c1Val = suitToInt(c1.suitAsChar);
    int c2Val = suitToInt(c2.suitAsChar);

    if (c1Val != c2Val) return c1Val < c2Val;

    c1Val = rankToInt(c1.rankAsChar);
    c2Val = rankToInt(c2.rankAsChar);

    return c1Val < c2Val;

}

int getDealer() {

    char c;

    cin >> c;

    switch (c) {
        case 'N':
            return 0;
        case 'E':
            return 1;
        case 'S':
            return 2;
        case 'W':
            return 3;
        default:
            return -1;
    }
}

void printHand(Hand h) {

    cout << h.direction << ":";

    for (int i = 0; i < 13; ++i) {
        cout << " " << h.cards[i].suitAsChar << h.cards[i].rankAsChar;
    }

    cout << endl;
}

int main() {

    vector<Hand> hands(4);
    hands[0].direction = 'N';
    hands[1].direction = 'E';
    hands[2].direction = 'S';
    hands[3].direction = 'W';

    int dealer = getDealer();

    while (dealer >= 0) {

        int firstPlayer = (dealer + 1) % 4;
        int h = firstPlayer;
        int c = 0;

        for (int i = 0; i < 52; ++i) {
            cin >> hands[h].cards[c].suitAsChar;
            cin >> hands[h].cards[c].rankAsChar;

            h = (h + 1) % 4;
            if (h == firstPlayer) {
                c++;
            }
        }

        for (int i = 0; i < 4; ++i)  {
            sort(hands[i].cards, hands[i].cards + 13, sortCard);
        }

        printHand(hands[2]);
        printHand(hands[3]);
        printHand(hands[0]);
        printHand(hands[1]);

        dealer = getDealer();
    }


    return 0;
}