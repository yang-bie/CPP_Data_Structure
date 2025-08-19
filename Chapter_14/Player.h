//
// Created by Yang on 8/18/25.
//
// Specification file for the class player
#ifndef CPP_DATA_STRUCTURE_PLAYER_H
#define CPP_DATA_STRUCTURE_PLAYER_H
#include <string>
using namespace std;

class Player {
private:
    string name;
    string guess;
    int points;
public:
    Player(string);
    void makeGuess();
    void addPoints(int);
    string getName();
    string getGuess();
    int getPoints();
};
#endif // CPP_DATA_STRUCTURE_PLAYER_H
