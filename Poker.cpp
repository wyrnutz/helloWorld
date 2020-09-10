#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "CardDeck.h"

using namespace std;

vector<Card> newDeck;
int HAND = 5;

int main() {

    srand(time(0));
    string str;

    do{
        newDeck = deck;
        shuffle(newDeck);
        printShoe(newDeck);
        vector<Card> playersHand;

        for (int x = 0; x < HAND; x++) {
            playersHand.push_back(*(newDeck.begin()));
            newDeck.erase(newDeck.begin());
        }
        getSuit(playersHand);
        getFace(playersHand);
        getStraight(playersHand);
        cout << endl; printShoe(playersHand);

        cout << endl << "How many cards to discard?";
        int myDiscards = 0;
        cin >> myDiscards;
        while (myDiscards > HAND-1) {
            cout << endl << "Discards must be less than 5";
            cin >> myDiscards;
            if (myDiscards <= 0) {
                break;
            }
        }
        for (int it = 0; it < myDiscards; it++) {
            int nextCard = 0;
            while (nextCard > HAND || nextCard < 1) {
                cout << endl << "Card to discard";
                cout << endl << "Must be between 0-5.";
                cin >> nextCard;//must be between 0-5                
            }
            nextCard -= 1;

            playersHand.erase(playersHand.begin() + nextCard);
            printShoe(playersHand);
        }
        cout << endl << "Dealing " << myDiscards << " cards";
        for (int it = 0; it < myDiscards; it++) {
            playersHand.push_back(*(newDeck.begin()));
            newDeck.erase(newDeck.begin());
        }
        getSuit(playersHand);
        getFace(playersHand);
        getStraight(playersHand);

        cout << endl; printShoe(playersHand);
        cout << endl << "Play again? y or n.";
        cin >> str;
    } while (str == "y");

    return 0;
}

