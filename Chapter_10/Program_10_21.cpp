//
// Created by Yang on 8/1/25.
//
// This program demonstrates a string
// object's length member function.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string town;

    cout << "Where do you live?";
    getline(cin, town);
    cout << "Your town's name has " << town.length() << " characters\n";
    return 0;
}