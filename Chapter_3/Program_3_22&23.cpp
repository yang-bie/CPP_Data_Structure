//
// Created by Yang on 7/13/25.
//
// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().
#include <iostream>
using namespace std;

int main() {
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cin.ignore();       // Skip the newline character.
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank you !";
    return 0;
}
