#ifndef PLAYER_H_
#define PLAYER_H_

#include <vector>
class Card;

class Player {
    private:
        int id, points;
        //nextId, since it is static and incremented in the constructor, guarantees each user has
        // a unique id
        static int nextId;
        std::vector<Card*>* hand;
        
    public:
        int getId() const;
        const std::vector<Card*>* const getHand() const;
        const Card* const getCard(int index=0) const;
        int getPoints() const;
        void setPoints(int value);
        bool setCard(Card& card, int index=0);
        Player();
        ~Player();

};

#endif
