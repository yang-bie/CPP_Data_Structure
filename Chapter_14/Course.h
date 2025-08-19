//
// Created by Yang on 8/17/25.
//

#ifndef CPP_DATA_STRUCTURE_COURSE_H
#define CPP_DATA_STRUCTURE_COURSE_H
#include <iostream>
#include <string>
#include "Instructor.h"
#include "TextBook.h"

using namespace std;

class Course {
private:
    string name;
    Instructor instructor;
    TextBook textbook;

public:
    Course(string cName, string lName, string fName, string offNum, string bTitle, string bAuthor, string bPublisher) :
        instructor(lName, fName, offNum), textbook(bTitle, bAuthor, bPublisher) {
        name = cName;
    }

    void print() {
        cout << "Course name: " << name << endl << endl;
        cout << "Instructor Information: \n";
        instructor.print();
        cout << "Textbook Information: \n";
        textbook.print();
        cout << endl;
    }
};
#endif // CPP_DATA_STRUCTURE_COURSE_H
