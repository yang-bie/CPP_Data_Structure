//
// Created by Yang on 8/18/25.
//
// Specification file for the Dealer class
#ifndef CPP_DATA_STRUCTURE_DEALER_H
#define CPP_DATA_STRUCTURE_DEALER_H
#include <string>
#include "Die.h"
using namespace std;

class Dealer {
private:
    Die die1;
    Die die2;
    int die1Value;
    int die2Value;
public:
    Dealer();
    void rollDice();
    string getChoOrHan();
    int getDie1Value();
    int getDie2Value();
};
#endif // CPP_DATA_STRUCTURE_DEALER_H
