#include "deck.h"
#include "card.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::vector;
using std::random_shuffle;

int rando(int i) {return std::rand() % i;}

//class Deck {
   
    /**
     * Create deck of cards and initialize them
     *
     */
    void Deck::init() {
        
        std::srand ( unsigned ( std::time(0) ) );
        for(int i = 0; i < 5; ++i) {  //There are 5 guards (value 1) total
            deck->push_back(new Card(1));
        }
        for(int i = 0; i < 2; ++i) { //2 priests
            deck->push_back(new Card(2));
        }
        for(int i = 0; i < 2; ++i) {  //2 barons
            deck->push_back(new Card(3));
        }
        for(int i = 0; i < 2; ++i) {  //2 handmaids
            deck->push_back(new Card(4)); 
        }
        for(int i = 0; i < 2; ++i) {  //2 princes
            deck->push_back(new Card(5)); 
        }
        deck->push_back(new Card(6)); //1 king
        deck->push_back(new Card(7)); //1 countess
        deck->push_back(new Card(8)); //1 princess
        //initialize each card
        for(vector<Card *>::iterator it = deck->begin(); it != deck->end(); ++it) {
            (*it)->init();
        }
        random_shuffle(deck->begin(), deck->end(), rando);
        //"delete" the top card after randomization
        topInd++;        
    }
    
    /**
     * debug function that prints the value and name of each card in the deck to cout
     *
     */
    void Deck::getInfo() {
        if(this->isEmpty()) {
            std::cout << "Deck is empty!\n" << std::endl; 
        }
        for(int i = topInd; i < deck->size(); ++i) {
            std::cout << deck->at(i)->getValue() << '\n' << deck->at(i)->getName() << "\n\n";
        }
    }

    /**
     * returns a reference to the top card and "removes" it from the deck
     *      
     */
    const Card* const Deck::draw() {
        if(!this->isEmpty()) {
            const Card* const next = deck->at(topInd);
            topInd++;    
            return next;        
        }
        else {
            return 0; 
        }
                
    }

    bool Deck::isEmpty() {
        return topInd == deck->size();
    }

    /**
     * Constructor for Deck
     */
    Deck::Deck() : deck(new vector<Card *>())
                    , topInd(0) {}
    
    /**
     * Destructor for Deck
     *
     */
    Deck::~Deck() {
        for(vector<Card *>::iterator it = deck->begin(); it != deck->end(); ++it) {
            delete *it;
        }
        delete deck;
    }
//};
