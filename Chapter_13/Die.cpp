//
// Created by Yang on 8/12/25.
//
// Implementation file for class Die
#include "Die.h"
#include <cstdlib>
#include <ctime>
using namespace std;

// The constructor accepts an argument for the number
// of sides for the die, and perform a roll.

 Die::Die(int numSides) {
     // Get the system time
     unsigned seed = time(0);

     // Seed the random number generator.
     srand(seed);

     // Set the number of sides.
     sides = numSides;

     // Perform a roll.
     roll();
 }

// The roll member function simulates the rolling of the die.

void Die::roll() {
     // Constant for the minimum die value
     const int MIN_VALUE = 1;

     // Get a random value for the die.
     value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
 }

// The getSides member function returns the number of sides
// for the die.

int Die::getSides() { return sides; }

// The getValue member function returns the die's value.

int Die::getValue() { return value; }



