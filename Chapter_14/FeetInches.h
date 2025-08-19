//
// Created by Yang on 8/16/25.
//
// The FeetInches class hold distances or measurements expressed in feet and inches.
#ifndef CPP_DATA_STRUCTURE_FEETINCHES_H
#define CPP_DATA_STRUCTURE_FEETINCHES_H
#include <iostream>
using namespace std;
// class FeetInches; // Forward Declaration
//
// // Function prototypes for Overloaded Stream Operators
// ostream &operator<<(ostream &, const FeetInches &);
// istream &operator>>(istream &, FeetInches &);

class FeetInches {
private:
    int feet; // To hold a number of feet
    int inches; // To hold a number of inches
    void simplify(); // Defined in FeetInches.cpp
public:
    // Constructor
    FeetInches(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        simplify();
    }

    int getFeet() const { return feet; }
    void setFeet(int f) { feet = f; }
    int getInches() const { return inches; }
    void setInches(int i) { inches = i; }

    // Overloaded operator functions
    FeetInches operator+(const FeetInches &);
    FeetInches operator-(const FeetInches &);
    FeetInches operator++();
    FeetInches operator++(int);
    bool operator>(const FeetInches &);
    bool operator<(const FeetInches &);
    bool operator==(const FeetInches &);
    operator double();
    operator int();

    // Friends
    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &, FeetInches &);
};
#endif // CPP_DATA_STRUCTURE_FEETINCHES_H
