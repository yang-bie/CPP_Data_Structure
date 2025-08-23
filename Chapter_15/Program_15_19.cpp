//
// Created by Yang on 8/21/25.
//
// This program demonstrates the CsStudent class, which is
// derived from the abstract base class Student.
#include <iostream>
#include "CsStudent.h"
using namespace std;

int main() {
    // Create a CsStudent object for a student.
    CsStudent student("jennifer Haynes", "167W98337", 2006);

    // Store values for Math, Computer Science, and General Ed hours.
    student.setMathHours(12);
    student.setCsHours(20);
    student.setGenEdHours(40);

    // Display the number of remaining hours.
    cout << "The student " << student.getName() << " needs to take "
    << student.getRemainingHours() << " more hours to graduate.\n";

    return 0;
}