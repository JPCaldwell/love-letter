#ifndef DECK_H_
#define DECK_H_

#include <vector>

class Card;

class Deck {
    public:
        Deck();
        ~Deck();
        void init();
        void getInfo();
        const Card* const draw();
        bool isEmpty();
    private:
        std::vector<Card *>* deck;
        int topInd;

};

#endif
