//
// Created by Yang on 8/18/25.
//
// Implementation file for Dealer class.
#include "Dealer.h"
#include <string>
using namespace std;

//**********************************************
// Constructor
//**********************************************

Dealer::Dealer() {
    die1Value = 0;
    die2Value = 0;
}

//**********************************************
// The rollDice member function rolls the
// dice and saves their values.
//**********************************************

void Dealer::rollDice() {
    // Roll the dice.
    die1.roll();
    die2.roll();

    // Save the dice value.
    die1Value = die1.getValue();
    die2Value = die2.getValue();
}

//**********************************************
// The getChoOrHan member function returns
// the result of the dice roll, Cho (even)
// or Han (odd).
//**********************************************

string Dealer::getChoOrHan() {
    string result; // To hold the result

    // Get the sum of the dice.
    int sum = die1Value + die2Value;
    if (sum % 2 == 0)
        result = "Cho (even)";
    else
        result = "Han (odd)";

    return result;
}

//**********************************************
// Accessor function
//**********************************************

int Dealer::getDie1Value() { return die1Value; }
int Dealer::getDie2Value() { return die2Value; }
