//
// Created by Yang on 8/17/25.
//
#include "Course.h"

int main() {
    // Create a Course object.
    Course myCourse("Intro to Computer Science", "Kramer", "Shawn", "RH3010",
        "Starting Out With C++", "Gaddis", "Pearson");

    // Display the course info.
    myCourse.print();
    return 0;
}