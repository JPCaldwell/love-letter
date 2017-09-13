#ifndef CARD_H_
#define CARD_H_

#include <string>


class Card {
    public:
        Card(int valueIn=1);        
        int getValue() const;
        const std::string& getName() const;
        void init();
        void printInfo() const;
    private:
        std::string name;
        int value;
};

#endif
