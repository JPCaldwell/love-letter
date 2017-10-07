#include "player.h"
#include "card.h"
#include <iostream>

using std::vector;

//initialize static variable nextId of class Player
int Player::nextId = 0;

/**
 * Returns the player's id
 */
int Player::getId() const {
    return id;
}

/**
 * returns a pointer to a vector containing the player's cards
 */
const vector<Card*>* const Player::getHand() const {
    return hand;
}

/*
 * returns a pointer to the card at the given index
 * returns a null pointer if index is out of bounds
 */
const Card* const Player::getCard(int index) const {
    if(index < 0 || index > 1) {   
        return 0;
    }
    return hand->at(index);
}

/**
 * returns the player's current number of points
 */
int Player::getPoints() const {
    return points;
}

/**
 * sets points to the given value
 */
void Player::setPoints(int value) {
    points = value;
}

/**
 * sets the card at the given index to the given reference
 * returns true on success
 */
bool Player::setCard(Card& card, int index) {
    if(index >= 0 && index <= 1) { //check if index is in bounds
        hand->at(index) = &card;
        return 1; //success
    }
    return 0; //failure
}

/**
 * Constructor for player, id has default value of 1
 */
Player::Player() : id(nextId++)
                            , points(0)
                            , hand(new vector<Card*>()) { }


/**
 * Destructor for Player
 */                            
Player::~Player() {
    delete hand;
}    
