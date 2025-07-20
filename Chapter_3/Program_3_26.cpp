//
// Created by Yang on 7/13/25.
//
// This program simulates rolling dice.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Constants
    const int MAX_VALUE = 6;
    const int MIN_VALUE = 1;

    // Variables
    int die1;
    int die2;

    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    cout << "Rolling the dice...\n";
    die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << die1 << endl;
    cout << die2 << endl;
    return 0;
}
