#include "card.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


/**
 * File to test that Card is working as intended
 *
 */
void printInfo(Card* card) {
    cout << "name: " << card->getName() << "\nvalue: " << card->getValue() << endl;
}

int main() {
    Card* guard = new Card(1);
    Card* princess = new Card(8);
    guard->init();
    princess->init();
    printInfo(guard);
    printInfo(princess);
    return 0;
}
