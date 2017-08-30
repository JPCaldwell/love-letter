#ifndef DECK_H_
#define CARD_H_

#include <vector>
#include "card.h"

class Deck {
    public:
        Deck();
        void init();
    private:
        vector<Card>* deck;
};

#endif
