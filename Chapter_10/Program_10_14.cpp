//
// Created by Yang on 7/31/25.
//
// This program demonstrates a function, countChars, that counts
// the number of times a specific character appears in a string.
#include <iostream>
using namespace std;

// Function prototype
int countChars(char *, char);

int main() {
    const int SIZE = 51; // Array size
    char userString[SIZE]; // To hold a string
    char letter; // The character to count

    // Get a string from the user.
    cout << "Enter a string (up to 50 characters): ";
    cin.getline(userString, SIZE);

    // Choose a character whose occurrences within the string will be counted.
    cout << "Enter a character and I will tell you how may\n"
         << "times it appears in the string: ";
    cin >> letter;

    // Display the number of times the character appears.
    cout << letter << " appears  " << countChars(userString, letter) << " times.\n";
    return 0;
}

//*************************************************************
// Definition of function  countChars.
// The parameter strPtr is a pointer that points to a string.
// The parameter Ch is a character that the function searches
// for in the string.
// The function returns the number of times the character
// in the string.
//*************************************************************

int countChars(char *strPtr, char ch) {
    int times = 0; // Number of times ch appears in the string

    // Step through the string counting occurrences of ch
    while (*strPtr != '\0') {
        if (*strPtr == ch) // If the current character equals
            times++;       // ch increment the counter
        strPtr++; // Go the next char in the string.
    }
    return times;
}
