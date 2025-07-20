//
// Created by Yang on 7/9/25.
//
// This program calculates the average
// of three test scores.
#include <iostream>
using namespace std;

int main() {
    double test1, test2, test3;   // To hold the scores
    double average;               // To hold the average

    // Get the three test score.
    cout << "Enter the first score: ";
    cin >> test1;
    cout << "Enter the second score: ";
    cin >> test2;
    cout << "Enter the third score: ";
    cin >> test3;

    // Calculate the average of the scores.
    average =( test1 + test2 + test3) / 3.0;

    // Display the average.
    cout << "The average score is: " << average << endl;
    return 0;
}
