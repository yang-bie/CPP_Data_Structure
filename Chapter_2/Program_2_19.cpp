//
// Created by Yang on 7/8/25.
//
// This is a program shows variable initialization
#include <iostream>
using namespace std;

int main() {
    // month days are lvalue; 2 and 28 are rvalue
    // All of them are operands; = is assignment operator
    int month = 2, days = 28;  // This is initialization

    cout << "Month " << month << " has " << days << " days.\n";
    return 0;
}