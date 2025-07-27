//
// Created by Yang on 7/24/25.
//
// This program demonstrates the range-based for loop.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string planets[] = {"Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Sturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)"};

    cout << "Here are the planets:\n";

    // Display the values in the array.
    for (string val : planets)
        cout << val << endl;

    return 0;
}