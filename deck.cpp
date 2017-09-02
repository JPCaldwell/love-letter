#include "deck.h"
#include <algorithm>
#include <iostream>
#include <string>

using std::vector;
using std::random_shuffle;
//class Deck {
   
    /**
     * Create deck of cards and initialize them
     *
     */
    void Deck::init() {
        for(int i = 0; i < 5; ++i) {  //There are 5 guards (value 1) total
            deck->push_back(Card(1));
        }
        for(int i = 0; i < 2; ++i) { //2 priests
            deck->push_back(Card(2));
        }
        for(int i = 0; i < 2; ++i) {  //2 barons
            deck->push_back(Card(3));
        }
        for(int i = 0; i < 2; ++i) {  //2 handmaids
            deck->push_back(Card(4)); 
        }
        for(int i = 0; i < 2; ++i) {  //2 princes
            deck->push_back(Card(5)); 
        }
        deck->push_back(Card(6)); //1 king
        deck->push_back(Card(7)); //1 countess
        deck->push_back(Card(8)); //1 princess
        //initialize each card
        for(vector<Card>::iterator it = deck->begin(); it != deck->end(); ++it) {
            (*it).init();
        }

    }
    
    /**
     * debug function that prints the value and name of each card in the deck to cout
     *
     */
    void Deck::getInfo() {
        for(vector<Card>::iterator it = deck->begin(); it != deck->end(); ++it) {
            std::cout << (*it).getValue() << '\n' << (*it).getName() << "\n\n";
        }
    }

    /**
     * Constructor for Deck
     *
     */
    Deck::Deck() : deck(new vector<Card>()) {}
    
    /**
     * Destructor for Deck
     *
     */
    Deck::~Deck() {
        delete deck;
        std::cout << "Deck deleted!" << std::endl;
    }
//};
