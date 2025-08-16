//
// Created by Yang on 7/28/25.
//
// This program uses two functions that accept addresses of
// variables as arguments.
#include <iostream>
using namespace std;

// Function prototype
void getNumber(int *);
void doubleValue(int *);

int main() {
    int number;

    // Call get Number and pass address of number.
    getNumber(&number);

    // Call doubleValue and pass the address of number.
    doubleValue(&number);

    // Display the value in number.
    cout << "That value doubled is " << number << endl;
    return 0;
}

//***************************************************************
// Definition of getNumber. The parameter, input, is a pointer.
// This function asks the user for a number. The value entered
// is stored in the variable pointed to by input.
//***************************************************************

void getNumber(int *input) {
    cout << "Enter an integer number: ";
    cin >> *input;
}

//***************************************************************
// Definition of doubleValue. The parameter, val, is a pointer.
// This function multiplies the variable pointer to by val by
// two.
//***************************************************************

void doubleValue(int *val) {
    *val *= 2;
}