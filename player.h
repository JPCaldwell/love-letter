#ifndef PLAYER_H_
#define PLAYER_H_

class Card;

class Player {
    private:
        int id, points;
        //nextId, since it is static and incremented in the constructor, guarantees each user has
        // a unique id
        static int nextId;
        Card* hand;
    public:
        int getId() const;
        const Card* const getHand() const;
        const Card* const getCard(int index=0) const;
        int getPoints() const;
        void setpoints(int value);
        bool setCard(const Card& card, int index=0);
        Player();
        ~Player();

};

#endif
