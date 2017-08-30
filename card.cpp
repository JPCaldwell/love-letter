#include "card.h"

using std::string;


void Card::init() {
    //Value must be between 1 and 8, inclusive.  If it is not, set it to the closest bound
    if(value < 1) {
        value = 1;
    }
    if(value > 8) {
        value = 8;
    }
    //The card's name is dependent on its value 
    switch(value) {
            case 1: name = "Guard"; break;
			case 2: name = "Priest"; break;
			case 3: name = "Baron"; break;
			case 4: name = "Handmaid"; break;
			case 5: name = "Prince"; break;
			case 6: name = "King"; break;
			case 7: name = "Countess"; break;
			case 8: name = "Princess"; break;
			default: name = "Error"; break;    //something went wrong, this should be an impossible value
    }
}

int Card::getValue() const {
    return value;
}

string Card::getName() const {
    return name;
}


Card::Card(int valueIn) : value(valueIn) {} 
