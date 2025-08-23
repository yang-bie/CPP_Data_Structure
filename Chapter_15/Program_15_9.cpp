//
// Created by Yang on 8/20/25.
//
#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

int main() {
    int questions;
    int missed;
    double minPassing;

    // Get the number of questions on the exam.
    cout << "How many questions on the exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Get the minimum passing score.
    cout << "Enter the minimum passing score for this test: ";
    cin >> minPassing;

    // Define a PassFailExam object.
    PassFailExam exam(questions, missed, minPassing);

    // Display the test result.
    cout << fixed << setprecision(1);
    cout << "\nEach question counts " << exam.getPointsEach() << " points.\n";
    cout << "The minimum passing score is " << exam.getMinPassingScore() << endl;
    cout << "The students's exam score is " << exam.getScore() << endl;
    cout << "The student's grade is " << exam.getLetterGrade() << endl;

    return 0;
}