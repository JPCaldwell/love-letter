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


int main() {
    Card* guard = new Card(1);
    Card* princess = new Card(8);
    guard->init();
    princess->init();
    guard->printInfo();
    princess->printInfo();
    return 0;
}
