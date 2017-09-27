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
        bool isEmpty() const;
        void reset();
    private:
        std::vector<Card *>* deck;
        int topInd;

};

#endif
