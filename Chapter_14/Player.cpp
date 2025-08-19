//
// Created by Yang on 8/18/25.
//
// Implementation file for Player class.
#include "Player.h"
#include <cmath>
#include <cstdlib>
using namespace std;

//**********************************************
// Constructor
//**********************************************

Player::Player(string playerName) {
    // Seed the random number generator.
    srand(time(0));

    name = playerName;
    guess = "";
    points = 0;
}
//**********************************************
// The makeGuess member function causes the
// player to make a guess, either "Cho (even)"
// or "Han (odd)".
//**********************************************

void Player::makeGuess() {
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 1;

    int guessNumber; // For the user's guess.

    // Get a random number, either 0 or 1.
    guessNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    // Convert the random number to Cho or Han.
    if (guessNumber == 0)
        guess = "Cho (even)";
    else
        guess = "Han (odd)";
}

//**********************************************
// The addPoints member function adds a
// specified number of points to the player's
// current balance.
//**********************************************

void Player::addPoints(int newPoints) { points += newPoints; }

//**********************************************
// Accessor function.
//**********************************************

string Player::getName() { return name; }
string Player::getGuess() { return guess; }
int Player::getPoints() { return points; }
