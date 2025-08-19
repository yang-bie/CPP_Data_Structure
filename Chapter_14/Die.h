//
// Created by Yang on 8/12/25.
//
// Specification file for class Die.

#ifndef CPP_DATA_STRUCTURE_DIE_H
#define CPP_DATA_STRUCTURE_DIE_H
class Die {
private:
    int sides; // Number of sides
    int value; // The die's value
public:
    Die(int numSides = 6);
    void roll();
    int getSides();
    int getValue();
};
#endif // CPP_DATA_STRUCTURE_DIE_H
