
#include <iostream>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;

class Card {
    private:
        int number;
        Suit suit;
    public:
        Card() { }
        Card(int n, Suit s) : number(n), suit(s) { }

        void display();
        bool isEqual(Card obj);
};

void Card::display() {
    if (number >= 2 && number <= 10) {
        cout << number << " of";
    }
    else {
        switch (number)
        {
        case jack:
            cout << "Jack of";
            break;
        
        case queen:
            cout << "Queen of";
            break;
     
        case king:
            cout << "king of";
            break;
        }
    }
    switch (suit)
    {
    case clubs:
        cout << " Clubs";
        break;
    
    case diamonds:
        cout << " Diamonds";
        break;
        
    case hearts:
        cout << " Hearts";
        break;

    case spades:
        cout << " Spades";
        break;
    }
}

bool Card::isEqual(Card obj) {
    return (number == obj.number && suit == obj.suit) ? true : false ;
}

int main() 
{
    Card temp, choosen, prize;
    int position;
    
    Card card1(7, clubs);
    cout << "\n Card1 is the ";
    card1.display();

    Card card2(jack, hearts);
    cout << "\n Card2 is the ";
    card2.display();

    Card card3(queen, spades);
    cout << "\n Card3 is the ";
    card3.display();

    prize = card3;

    cout << "\n I am swapping card1 and card 3";
    temp = card3;
    card3 = card1;
    card1 = temp;

    cout << "\n I am swapping card 2 and card 3";
    temp = card2;
    card2 = card3;
    card3 = temp;

    cout << "\n I am swapping card 1 and card 2";
    temp = card1;
    card1 = card2;
    card2 = temp;

    cout << "\n Now, where (1,2, or 3) is the ";
    prize.display();
    cout << "? ";
    cin >> position;

    switch (position)
    {
    case 1:
        choosen = card1;
        break;
    
    case 2:
        choosen = card2;
        break;

    case 3:
        choosen = card3;
        break;
    }

    if (choosen.isEqual(prize))
        cout << "That's right! You win!";
    else
        cout << "Sorry. You loose.";
    cout << "You chose the ";
    choosen.display();
    cout << endl;
    return 0;

}