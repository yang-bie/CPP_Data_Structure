//
// Created by Yang on 7/14/25.
//
// This program averages three test scores.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int HIGH_SCORE = 95;  // A high score is 95 or greater
    int score1, score2, score3; // To hold three test scores
    double  average;            // To hold the average score

    // Get the three test scores.
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << setprecision(1);
    cout << "Your average is " << average << endl;

    // If the average is a high score, congratulate the user.
    if (average = 100)  // WRONG! This is an assignment!
        cout << "Congratulations! That's a perfect score!\n";
    return 0;
}
