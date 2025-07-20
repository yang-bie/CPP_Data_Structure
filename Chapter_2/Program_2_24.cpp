//
// Created by Yang on 7/9/25.
//
// This program extracts the rightmost digit of a number
#include <iostream>
using namespace std;

int main() {
    int number = 12345;
    int rightMost = number % 10;

    cout << "The righmost digit in"
    << number << " is "
    << rightMost << endl;

    return 0;
}
