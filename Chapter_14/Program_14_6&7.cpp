//
// Created by Yang on 8/16/25.
//
// This program demonstrates the overloaded = operator.
#include "StudentTestScores.h"
#include <iostream>
using namespace std;

// Function prototype
void displayStudent (StudentTestScores);

int main() {
    // Create a StudentTestScores object and assign test scores.
    StudentTestScores student1("Kelly Thorton", 3);
    student1.setTestScores(100, 0);
    student1.setTestScores(95, 1);
    student1.setTestScores(80, 2);

    // Create two more StudentTestScores object with default test scores.
    StudentTestScores student2("Jimmy Griffin", 5);
    StudentTestScores student3("Kristen Lee", 10);

    // Assign the student1 object to student2 and student3
    student3 = student2 = student1;

    // Display both objects. They should contain the same data.
    displayStudent(student1);
    displayStudent(student2);
    displayStudent(student3);

    return 0;
}

// The displayStudent accepts a StudentTestScore object's data.

void displayStudent(StudentTestScores testScores) {
    cout << "Name: " << testScores.getStudentName() << endl;
    cout << "Test scores: ";
    for (int i = 0; i < testScores.getNumTestScores(); i++) {
        cout << testScores.getTestScore(i) << " ";
    }
    cout << endl;
}
