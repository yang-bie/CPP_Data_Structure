//
// Created by Yang on 7/24/25.
//
// This program initializes a string array.
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 9;
    string planets[SIZE] = {"Mercury", "Venus", "Earth", "Mars",
        "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

     cout << "Here are the planets: \n";

    for (int count = 0; count < SIZE; count++)
        cout << planets[count] << endl;
    return 0;
}