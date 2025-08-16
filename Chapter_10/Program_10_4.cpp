//
// Created by Yang on 7/30/25.
//
// This program contains string literals.
#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        cout << "C++ programming is great fun!" << endl;
        cout << "Do you want to see the message again? ";
        cin >> again;
    } while (toupper(again) == 'Y');
    return 0;
}