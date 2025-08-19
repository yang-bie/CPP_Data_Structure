//
// Created by Yang on 8/18/25.
//
// This program simulates the game of Cho-Han.
#include "Dealer.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

// Function prototype
void roundResults(Dealer &, Player &, Player &);
void checkGuess(Player &, Dealer &);
void displayGrandWinner(Player, Player);

int main() {
    const int MAX_ROUNDS = 5; // Number of rounds
    string player1Name; // First player's name
    string player2Name; // Second player's name

    // Get the player's name.
    cout << "Enter the first player's name: ";
    cin >> player1Name;
    cout << "Enter the second player's name: ";
    cin >> player2Name;

    // Create a dealer.
    Dealer dealer;

    // Create two players.
    Player player1(player1Name);
    Player player2(player2Name);

    // Play the rounds.
    for (int round = 0; round < MAX_ROUNDS; round++) {
        cout << "----------------------------\n";
        cout << "Now playing round " << (round + 1) << endl;

        // Roll th dice.
        dealer.rollDice();

        // The players make their guesses.
        player1.makeGuess();
        player2.makeGuess();

        // Determine the winner of this round.
        roundResults(dealer, player1, player2);
    }

    // Display the grand winner.
    displayGrandWinner(player1, player2);
    return 0;
}

void roundResults(Dealer &dealer, Player &player1, Player &player2) {
    // Show the dice values.
    cout << "The dealer rolled " << dealer.getDie1Value() << " and " << dealer.getDie2Value() << endl;

    // Show the result (Cho or Han).
    cout << "Result: " << dealer.getChoOrHan() << endl;

    // Check each player's guess and award points.
    checkGuess(player1, dealer);
    checkGuess(player2, dealer);
}

void checkGuess(Player &player, Dealer &dealer) {
    const int POINTS_TO_ADD = 1; // Points to award winner.

    // Get the player's guess.
    string guess = player.getGuess();

    // Get the result (Cho or Han)
    string choHanResult = dealer.getChoOrHan();

    // Display the player's guess.
    cout << "The player " << player.getName() << " guessed " << player.getGuess() << endl;

    // Award points if the player guessed correctly.
    if (guess == choHanResult) {
        player.addPoints(POINTS_TO_ADD);
        cout << "Awarding " << POINTS_TO_ADD << " point(s) to " << player.getName() << endl;
    }

}
void displayGrandWinner(Player player1, Player player2) {
    cout << "---------------------------------\n";
    cout << "Game over. Here are the reulsts:\n";

    // Display player #1's points.
    cout << player1.getName() << ": " << player1.getPoints() << " points\n";

    // Display player#2's points.
    cout << player2.getName() << ": " << player2.getPoints() << " points\n";

    // Determine the grand winner.
    if (player1.getPoints() > player2.getPoints())
        cout << player1.getName() << " is the grand winner!\n";
    else if (player2.getPoints() > player1.getPoints())
        cout << player2.getName() << " is the grand winner!\n";
    else
        cout << "Both players are tied!\n";
}
