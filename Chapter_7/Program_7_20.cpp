//
// Created by Yang on 7/25/25.
//
// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iomanip>
#include <iostream>
using namespace std;

// Function prototype
void getTestScores(double[], int);
double getLowest(const double[], int);
double getTotal(const double[], int);

int main() {
    const int SIZE = 4; // Array size
    double testScores[SIZE]; // Array of test scores
    double total; // Total of scores
    double lowestScore; // Lowest test score
    double average; // Average test score

    // Set numeric output formatting.
    cout << fixed << setprecision(1);

    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    // Get the total of the test scores.
    total = getTotal(testScores, SIZE);

    // Get the lowest score.
    lowestScore = getLowest(testScores, SIZE);

    // Subtract the lowest score from the total.
    total -= lowestScore;

    // Calculate the average.
    average = total / (SIZE - 1);

    // Display the average.
    cout << "The average with the lowest score dropped is " << average << ".\n";
    return 0;
}

//
// The getTestScores function accepts an array and its size
// as arguments. It prompts the user to enter test scores,
// which are stored in the array.
//

void getTestScores(double scores[], int size) {
    for (int index = 0; index < size; index++) {
        cout << "Enter test score number " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

//******************************************************
// The getTotal function accepts an array and its size
// as arguments. The sum of the array's elements is
// returned as a double.
//******************************************************

double getTotal(const double scores[], int size) {
    double total = 0; // Accumulator

    for (int index = 0; index < size; index++)
        total += scores[index];

    return total;
}

//******************************************************
// The getLowest function accepts an array and its size
// as arguments. The lowest score in the array is
// returned as a double.
//******************************************************

double getLowest(const double scores[], int size) {
    // To hold the lowest value and set it with the first element in the array.
    double lowest = scores[0];

    // Step through the rest of the array. When a value less than lowest is found,
    // assign it to lowest.
    for (int index = 1; index < size; index++) {
        if (scores[index] < lowest)
            lowest = scores[index];
    }
    return lowest;
}
