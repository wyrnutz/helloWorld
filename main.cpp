
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
#include "CardDeck.h"

using namespace std;

bool ENDGAME = true;


int main()
{
    srand(time(0));
    //cout<<"Poker or Blackjack";
    //cin.get();
    playBlackjack(myDeck);
    //playPoker(deck);

    return 0;
}

void playBlackjack(Card* myDeck){
    int  y = 0;
    int Bust = 0;
    int win = 0, draw = 0, losses = 0;
    Card playersHand[10], dealersHand[10], playersHand2[10];

    Card Shoe[SHOESIZE];
    ShuffleShoe(Shoe,SHOESIZE);
    int cardCounter = 0;

    while(ENDGAME){
        cout<<endl;
        int playersSum = 0, dealersSum = 0;
        bool playerBUST = false, dealerBUST = false, STAND = false, playerBlackjack = false;


        cout<<"The player's hand.";
        playersHand[0] = Shoe[cardCounter]; cardCounter++;
        playersHand[1] = Shoe[cardCounter]; cardCounter++;
        printCard(playersHand,2);
        cout<<endl<<"The dealer shows a ";
        dealersHand[0] = Shoe[cardCounter];cardCounter++;
        dealersHand[1] = Shoe[cardCounter];cardCounter++;
        printCard(dealersHand,1);

        //The player's hand
        playersSum = getSum(playersHand,2);
        if(Blackjack(playersHand)){
            playerBlackjack = true;
            //ENDGAME = false;
            }
        if(playersSum == 22){
            cout<<endl<<"Split";
            playersHand2[0] = playersHand[1];
            playersHand[1] = Shoe[cardCounter];cardCounter++;
            playersHand2[1] = Shoe[cardCounter];cardCounter++;
            cout<<endl<<"Player's first hand ";
            printCard(playersHand,2);cout<<endl<<"The sum of your first hand is "<<getSum(playersHand,2);
            cout<<endl<<"Player's second hand ";
            printCard(playersHand2,2);cout<<endl<<"The sum of your second hand is "<<getSum(playersHand2,2);
            }
        cout<<endl<<"The sum of your cards is "<<playersSum;
        y=1;//y is 1 because thats the last element in each  hand
        if(playerBUST == false && ENDGAME == true){
            while(playersSum <= 14 && playerBUST == false ){
                cout<<endl<<" Another card? ";
                y++;
                playersHand[y] = Shoe[cardCounter]; cardCounter++;
                playersSum = getSum(playersHand,y+1);
                printCard(playersHand[y]);
                cout<<endl<<"The sum of "<< y+1 << " cards is "<<playersSum<<".";
                if(playersSum > 21){
                    if(doesHandHaveAce(playersHand,y+1)){
                            changeValueofAce(playersHand,y+1);
                            playersSum = getSum(playersHand,y+1);
                            cout<<endl<<"The new sum is "<<playersSum<<".";
                        }
                    if(playersSum > 21){
                        cout<<" Busted"; Bust++; playerBUST = true;
                        }
                    }
                 }
        if(playerBUST == true){
                cout<<endl<< " You lose.";
                }
        else {
                cout<<endl<<" Stand";
             }
        }
         //The dealer's hand
        dealersSum = getSum(dealersHand,2);
        if(playerBUST == false && ENDGAME == true){
            cout<<endl<<"The dealer's second card is "; printCard(dealersHand[1]);
            if(Blackjack(dealersHand)){
                cout<<endl<< "Dealer has Blackjack. ";
                //ENDGAME = false;
                }
            if(dealersSum == 22){
                cout<<endl<<"Two Aces on first two cards.";
                changeValueofAce(dealersHand,2);
                dealersSum = getSum(dealersHand,2);
                cout<<endl<<"The new sum is "<<dealersSum<<".";
                }
            else{
                cout<<endl<<"The sum of the dealer's hand is "<<dealersSum;
                }
            }
        y = 1;
        if(dealerBUST == false && playerBUST == false && STAND == false && ENDGAME == true){
            while(dealersSum < 17){
                cout<<endl<<"The dealer takes another card. ";
                y++;
                dealersHand[y] = Shoe[cardCounter]; cardCounter++;
                printCard(dealersHand[y]);
                dealersSum = getSum(dealersHand,y+1);
                cout<<endl<<"The sum of the dealer's hand is "<< dealersSum;
                if(dealersSum >= 17 && dealersSum < 22){
                    cout<<endl<<" The dealer stands.";
                    STAND = true;
                    }
                if(dealersSum>21){
                    if(doesHandHaveAce(dealersHand,y+1)){
                        changeValueofAce(dealersHand,y+1);
                        dealersSum = getSum(dealersHand,y+1);
                        cout<<endl<<"The new sum is "<<dealersSum<<".";
                        }
                    else if(dealersSum > 21){
                        cout<<endl<<"The dealer busts."; dealerBUST = true;
                    }
                }
            }
        }
        //Resolving the hands
        if(playerBlackjack){
            cout<<endl<<"Blackjack. You win"; win++;
            }
        else if((playersSum > dealersSum && playerBUST == false) || dealerBUST == true){
            cout<<endl<<"You win!"; win++;
            }
        else if(dealersSum > playersSum && dealerBUST == false){
            cout<<endl<<"The dealer wins."; losses++;
            }
        else if(dealersSum == playersSum){
            cout<<endl<<"Draw."; draw++;
            }
        if(cardCounter > SHOESIZE -10){
            cout<<endl<<"Shoe is empty.";
            ENDGAME = false;
        }
        cout<<endl<<" Times busted "<<Bust<<"."<<" Wins "<<win<<"."<<" Draws "<<draw<<"."<<" Losses "<<losses + Bust;
        cout<<endl<<"Cards dealt "<<cardCounter<<endl;
        //cin.get();
        }
    }




