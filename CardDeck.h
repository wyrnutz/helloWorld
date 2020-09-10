
#ifndef CARDDECK_H_INCLUDED
#define CARDDECK_H_INCLUDED

using namespace std;

const int LENGTH = 52, SHOESIZE = 6 * LENGTH;
const string HEART = " Hearts", DIAMOND =  " Diamonds", SPADE = " Spades", CLUB = " Clubs",
             ACE = " Ace", JACK =" Jack", QUEEN = " Queen", KING = " King",
             TWO = " Two", THREE =" Three", FOUR = " Four", FIVE = " Five", SIX = " Six", SEVEN =" Seven",
             EIGHT = " Eight", NINE = " Nine", TEN = " Ten", JOKER = " Joker";

struct Card{
    string Suit;
    string faceValue;
    int actualValue;
    Card() {Suit = JOKER, faceValue = ""; actualValue = 0;}
    Card (string Suit_, string faceValue_, int actualValue_){Suit = Suit_, faceValue = faceValue_,
            actualValue = actualValue_;}
    bool operator < (const Card & myCard)const{
        return actualValue < myCard.actualValue;}
    };

    void printCard(Card&);
    void printCard(Card[],int size);
    void printCard(Card*);
    int getActualValue_ofCard(Card* card);
    Card* getLastCard(Card* card, int size);
    Card* shuffleDeck(Card* card, int size);
    int pickaCard();
    void playBlackjack(Card*);
    bool doesHandHaveAce(Card* card, int size);
    int getSum(Card*,int size);
    void changeValueofAce(Card*,int size);
    bool Blackjack(Card*);
    Card* ShuffleShoe(Card*,int size);
    vector<Card>& shuffle(vector<Card>& );
    vector<Card>& shoe(vector<Card>& );
    void printShoe(vector<Card>&);
    int getSome(vector<Card>& card);
    void getSuit(vector<Card>& deck);
    void getFace(vector<Card>& deck);
    void getStraight(vector<Card>& deck);

Card    AceofSpades(SPADE,ACE,11),TwoofSpades(SPADE,TWO,2),ThreeofSpades(SPADE,THREE,3),
        FourofSpades(SPADE,FOUR,4),FiveofSpades(SPADE,FIVE,5),SixofSpades(SPADE,SIX,6),
        SevenofSpades(SPADE,SEVEN,7),EightofSpades(SPADE,EIGHT,8),NineofSpades(SPADE,NINE,9),
        TenofSpades(SPADE,TEN,10),JackofSpades(SPADE,JACK,10),QueenofSpades(SPADE,QUEEN,10),
        KingofSpades(SPADE,KING,10),
        AceofDiamonds(DIAMOND,ACE,11),TwoofDiamonds(DIAMOND,TWO,2),ThreeofDiamonds(DIAMOND,THREE,3),
        FourofDiamonds(DIAMOND,FOUR,4),FiveofDiamonds(DIAMOND,FIVE,5),SixofDiamonds(DIAMOND,SIX,6),
        SevenofDiamonds(DIAMOND,SEVEN,7),EightofDiamonds(DIAMOND,EIGHT,8),NineofDiamonds(DIAMOND,NINE,9),
        TenofDiamonds(DIAMOND,TEN,10),JackofDiamonds(DIAMOND,JACK,10),QueenofDiamonds(DIAMOND,QUEEN,10),
        KingofDiamonds(DIAMOND,KING,10),AceofHearts(HEART,ACE,11),TwoofHearts(HEART,TWO,2),
        ThreeofHearts(HEART,THREE,3),FourofHearts(HEART,FOUR,4),FiveofHearts(HEART,FIVE,5),
        SixofHearts(HEART,SIX,6),SevenofHearts(HEART,SEVEN,7),EightofHearts(HEART,EIGHT,8),NineofHearts(HEART,NINE,9),
        TenofHearts(HEART,TEN,10),JackofHearts(HEART,JACK,10),QueenofHearts(HEART,QUEEN,10),
        KingofHearts(HEART,KING,10),AceofClubs(CLUB,ACE,11),TwoofClubs(CLUB,TWO,2),
        ThreeofClubs(CLUB,THREE,3),FourofClubs(CLUB,FOUR,4),FiveofClubs(CLUB,FIVE,5),SixofClubs(CLUB,SIX,6),
        SevenofClubs(CLUB,SEVEN,7),EightofClubs(CLUB,EIGHT,8),NineofClubs(CLUB,NINE,9),
        TenofClubs(CLUB,TEN,10),JackofClubs(CLUB,JACK,10),QueenofClubs(CLUB,QUEEN,10),KingofClubs(CLUB,KING,10);


Card myDeck[LENGTH]{
        AceofSpades,TwoofSpades,ThreeofSpades,FourofSpades,FiveofSpades,SixofSpades,
        SevenofSpades,EightofSpades,NineofSpades,TenofSpades,
        JackofSpades,QueenofSpades,KingofSpades,
        AceofDiamonds,TwoofDiamonds,ThreeofDiamonds,FourofDiamonds,FiveofDiamonds,
        SixofDiamonds,SevenofDiamonds,EightofDiamonds,NineofDiamonds,TenofDiamonds,
        JackofDiamonds,QueenofDiamonds,KingofDiamonds,
        AceofHearts,TwoofHearts,ThreeofHearts,FourofHearts,FiveofHearts,SixofHearts,
        SevenofHearts,EightofHearts,NineofHearts,TenofHearts,
        JackofHearts,QueenofHearts,KingofHearts,
        AceofClubs,TwoofClubs,ThreeofClubs,FourofClubs,FiveofClubs,SixofClubs,SevenofClubs,
        EightofClubs,NineofClubs,TenofClubs,
        JackofClubs,QueenofClubs,KingofClubs
        };
std::vector<Card> deck = {AceofSpades,TwoofSpades,ThreeofSpades,FourofSpades,FiveofSpades,
        SixofSpades,SevenofSpades,EightofSpades,NineofSpades,TenofSpades,
        JackofSpades,QueenofSpades,KingofSpades,
        AceofDiamonds,TwoofDiamonds,ThreeofDiamonds,FourofDiamonds,FiveofDiamonds,
        SixofDiamonds,SevenofDiamonds,EightofDiamonds,NineofDiamonds,TenofDiamonds,
        JackofDiamonds,QueenofDiamonds,KingofDiamonds,
        AceofHearts,TwoofHearts,ThreeofHearts,FourofHearts,FiveofHearts,SixofHearts,
        SevenofHearts,EightofHearts,NineofHearts,TenofHearts,
        JackofHearts,QueenofHearts,KingofHearts,
        AceofClubs,TwoofClubs,ThreeofClubs,FourofClubs,FiveofClubs,SixofClubs,SevenofClubs,
        EightofClubs,NineofClubs,TenofClubs,
        JackofClubs,QueenofClubs,KingofClubs};


void printCard(Card &mycard){//FUNCTION 1
        if(mycard.Suit == JOKER){
            cout<<endl<<"Nothing but a Joker.";
        }
        else
            cout<<mycard.faceValue<<" of"<<mycard.Suit;
        //cout<<"function 1";
        };

void printCard(Card* mycard){//FUNCTION 2
        if(mycard->Suit == JOKER){
            cout<<endl<<"Nothing but a Joker.";
            }
        else
            cout<<mycard->faceValue<<" of"<<mycard->Suit;
        cout<<"function 2";
        };

void printCard(Card mycard[], int x){//FUNCTION 3
        if(mycard->Suit == JOKER){
            cout<<endl<<"Nothing but a Joker.";
            }
        else
            for(int y=0;y<x;y++){
                cout<<mycard[y].faceValue<<" of"<<mycard[y].Suit;
                }
       // cout<<"function 3";
        }

Card* getLastCard(Card card[],int size){
        return &card[(size-1)];
        };

Card* shuffleDeck(Card* myCard,int size){
        Card* nextCard;
        Card randCard, currentLastCard;
        nextCard =  myCard;

        for(int x=(size-1) ; x>0 ; x--){
            int p = rand()%(x);

            nextCard = myCard + p;//ptr=rand p
            randCard = *nextCard;//card y = rand p
            nextCard = myCard + x;//ptr = last element
            currentLastCard = *nextCard;//card z = last element

            nextCard = myCard + p;//ptr=rand p
            *nextCard = currentLastCard;//rand p = last element
            nextCard = myCard + x;//ptr=random element
            *nextCard = randCard;//last element = rand p
            }
        return myCard;
        };

int pickaCard(){
        int n = 0;
        do{
            cout<<"Card must be in range 1 - 52"<<endl;
            cin>>n;
            }
        while((n < 1) || (n  > LENGTH));
        return n;
        }

int getActualValue_ofCard(Card* card){
        int value = card->actualValue;
        return value;
        }

bool doesHandHaveAce(Card* card, int size){
    bool Ace = false;
    for(int i = 0; i <size; i++){
        if(card[i].actualValue == 11){
            Ace = true;
            cout<<endl<<"There is an Ace.";
            break;
        }
    }
    return Ace;
}
int getSum(Card* card, int i){
    int sum = 0;
    for(int x=0; x<i; x++){
        sum += card[x].actualValue;
        }
    return sum;
    }

void changeValueofAce(Card* card,int size){
    for(int i=0; i<size; i++){
        if(card[i].actualValue == 11){
            card[i].actualValue = 1;
            break;//if there is more than one ace only changes the value of the first one
            }
        }
    }
 bool Blackjack(Card* card){
    bool TwentyOne = false;
    int Sum = getSum(card,2);
    if(Sum == 21){
        TwentyOne = true;
        }
    return TwentyOne;
    }
Card* ShuffleShoe(Card* Shoe, int SHOESIZE){
    int count = 0;
    while(count < SHOESIZE){
            for(int y=0;y<LENGTH;y++){
                Shoe[count++] = myDeck[y];
            }
        }
    shuffleDeck(Shoe,SHOESIZE);
    return Shoe;
}
 vector<Card>& shuffle(vector<Card>& deck){
    std::vector<Card> card;
    for(unsigned int x = deck.size(); x>0; x--){
        int p = rand()%(x);
        card.push_back(*(deck.begin()+p));
        deck.erase(deck.begin()+p);
        }
    deck = card;
    return deck;
    }
vector<Card>& shoe(vector<Card>& deck){
    int count = 0;
    std::vector<Card> card;
    while(count < SHOESIZE){
            for(int y=0;y<LENGTH;y++){
                card.push_back(*(deck.begin()+y));
                count++;
                }
        }
     deck = card;
    return deck;
    }
void printShoe(vector<Card>& deck){
    for(unsigned int n=0; n < deck.size(); n++){
        cout<<endl<<n+1<<" "; printCard(deck[n]);
        }
    }
int getSome(vector<Card>& card){
    unsigned int sum = 0;
    for(unsigned int x=0; x<card.size(); x++){
        sum += card[x].actualValue;
        }
    return sum;}

void getSuit(vector<Card>& deck){;
    string arrSuit[4] ={HEART,CLUB,DIAMOND,SPADE};
    int Hearts=0,Diamonds=0,Clubs=0,Spades = 0;
    int arrSuitVal[4]={Hearts,Clubs,Diamonds,Spades};
    for(int i=0;i<4;i++){
        for(unsigned int itn = 0; itn < deck.size(); itn++ ){
            if(deck[itn].Suit == arrSuit[i]){(arrSuitVal[i])++;
                }
            }
        }
    for(int i=0;i<4;i++){
        if(arrSuitVal[i]==5){
            cout<<endl<<"Flush!";
            }
        if(arrSuitVal[i]==4){
            cout<<endl<<"Almost flush";
            }
        }
    }
void getFace(vector<Card>& deck){
    cout<<"\n";
    string arrStringVal[13]={ACE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING};
    int Aces=0,Twos=0,Threes=0,Fours=0,Fives=0,Sixes=0,
        Sevens=0,Eights=0,Nines=0,
        Tens=0,Jacks=0,Queens=0,Kings=0;
    int arrIntVal[13]={Aces,Twos,Threes,Fours,Fives,Sixes,
        Sevens,Eights,Nines,
        Tens,Jacks,Queens,Kings};
    for(int itn=0;itn<13;itn++){
        for(unsigned int i = 0; i < deck.size(); i++ ){
            if(deck[i].faceValue == arrStringVal[itn]){
                    (arrIntVal[itn])++;
                }
            }
        }
    bool pare = false, treofaKind = false;
    for(int i=0;i<13;i++){
        if(arrIntVal[i]==2){
            cout<<endl<<"Pair of"<<arrStringVal[i]<<"s";
            pare = true;
            }
        if(arrIntVal[i]==3){
            cout<<endl<<"Three "<<arrStringVal[i]<<"s";
            treofaKind = true;
            }
        if(arrIntVal[i]==4){
            cout<<endl<<"Four "<<arrStringVal[i]<<"s";
            }
        }
    if(pare == true && treofaKind == true){
        cout<<endl<<"Full house";
            }
}
void getStraight(vector<Card>& playersHand){
    bool straight = true;
    for(unsigned int it=0;it<playersHand.size();it++){
        if(playersHand[it].faceValue==ACE){playersHand[it].actualValue =14;}
        if(playersHand[it].faceValue==KING){playersHand[it].actualValue =13;}
        if(playersHand[it].faceValue==QUEEN){playersHand[it].actualValue =12;}
        if(playersHand[it].faceValue==JACK){playersHand[it].actualValue =11;}
    }
    sort(playersHand.begin(),playersHand.end());
    for(int it=playersHand.size()-1;it>0;it--){
        if(playersHand[it].actualValue - playersHand[it-1].actualValue != 1 ){
                straight = false;
                break;
        }
    }
    if(straight){cout<<endl<<"Straight!";}
}
 #endif  //CARDDECK_H_INCLUDED
