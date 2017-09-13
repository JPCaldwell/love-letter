
class Card;

class Player {
    private:
        int id, points;
        Card* hand;
        
    public:
        int getId();
        int getPoints();
        Player();
        ~Player();

};
