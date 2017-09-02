#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include "card.h"

class Deck {
    public:
        Deck();
        ~Deck();
        void init();
        void getInfo();
    private:
        std::vector<Card>* deck;
};

#endif
