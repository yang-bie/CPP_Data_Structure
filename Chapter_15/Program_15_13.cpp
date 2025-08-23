//
// Created by Yang on 8/21/25.
//
#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

// Function prototype
void displayGrade(const GradedActivity *);

int main() {
    // Create a GradedActivity object. The score is 88.
    GradedActivity test1(88.0);

    // Create a PassFailExam object. There are 100 questions,
    // the student missed 25 of them, and the minimum passing
    // score is 70.
    PassFailExam test2(100, 25, 70.0);

    // Display the grade data for both objects.
    cout << "Test1:\n";
    displayGrade(&test1);
    cout << "\nTest2:\n";
    displayGrade(&test2);

    return 0;
}

//***************************************************************
// The displayGrade function displays a GradedActivity object's
// numeric score and letter grade.
//***************************************************************

void displayGrade(const GradedActivity *activity) {
    cout << fixed << std::setprecision(1);
    cout << "The activity's numeric score is " << activity->getScore() << endl;
    cout << "The activity's letter grade is " << activity->getLetterGrade() << endl;
}
