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
        const Card& draw();
    private:
        std::vector<Card *>* deck;
};

#endif
