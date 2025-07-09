//
// Created by Yang on 7/8/25.
//
// This program uses floating-point data types.
#include <iostream>
using namespace std;

int main() {
    float distance;
    double mass;

    distance = 1.495979E11; // The number before E is called mantissa
    mass = 1.989E30;  // Assign a floating-point value to integer variable
                      //will cause it to be truncated
    cout << "The sun is " << distance << " meters away.\n";
    cout << "The sun\'s mass is " << mass << " kilograms.\n";
    return 0;
}
