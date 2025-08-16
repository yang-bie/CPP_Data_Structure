//
// Created by Yang on 7/27/25.
//
// This program shows an array name being dereferenced with * operator.
#include <iostream>
using namespace std;

int main() {
    short numbers[] = {10, 20, 30, 40, 50};

    cout << "The first element of the array is ";
    cout << *numbers << endl;
    return 0;
}