//
// Created by Yang on 7/30/25.
//
// This program tests a customer number to determine whether
// it is in the proper format.
#include <cctype>
#include <iostream>
using namespace std;

// Function prototype
bool testNum(char[], int);

int main() {
    const int SIZE = 8; // Array size
    char customer[SIZE]; // To hold a customer number

    // Get the customer number.
    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    // Determine whether it is valid.
    if (testNum(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else {
        cout << "That is not the proper format of the ";
        cout << "customer number.\nHere is an example:\n";
        cout << "     ABC1234\n";
    }
    return 0;
}

//

bool testNum(char cusNum[], int size) {
    for (int count = 0; count < 3; count++) {
        if (!isalpha(cusNum[count]))
            return false;
    }

    for (int count = 3; count < size - 1; count++) {
        if (!isdigit(cusNum[count]))
            return false;
    }

    return true;
}

