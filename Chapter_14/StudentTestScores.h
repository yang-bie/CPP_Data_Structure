//
// Created by Yang on 8/16/25.
//

#ifndef CPP_DATA_STRUCTURE_STUDENTTESTSCORES_H
#define CPP_DATA_STRUCTURE_STUDENTTESTSCORES_H
#include <string>
#include <valarray>
using namespace std;

const double DEFAULT_SCORE = 0;

class StudentTestScores {
private:
    string studentName; // The student's name
    double *testScores; // Points to array of test scores
    int numTestScores; // Number of test scores

    // Private member function to create an array of test scores.
    void createTestScoresArray(int size) {
        numTestScores = size;
        testScores = new double[size];
        for (int i = 0; i < size; i++) {
            testScores[i] = DEFAULT_SCORE;
        }
    }

public:
    // Constructor
    StudentTestScores(string name, int numScores) {
        studentName = name;
        createTestScoresArray(numScores);
    }

    // Copy constructor
    StudentTestScores(const StudentTestScores &obj) {
        studentName = obj.studentName;
        numTestScores = obj.numTestScores;
        testScores = new double[numTestScores];
        for (int i = 0; i < numTestScores; i++) {
            testScores[i] = obj.testScores[i];
        }
    }

    // Destructor
    ~StudentTestScores() { delete[] testScores; }


    void setStudentName(const string &student_name) { studentName = student_name; }
    void setTestScores(double score, int index) { testScores[index] = score; }
    string getStudentName() const { return studentName; }
    int getNumTestScores() const { return numTestScores; }
    double getTestScore(int index) { return testScores[index]; }

    // Overloaded = operator
        const StudentTestScores operator=(const StudentTestScores &right) {
        if (this != &right) {
            delete[] testScores;
            studentName = right.studentName;
            numTestScores = right.numTestScores;
            testScores = new double[numTestScores];
            for (int i = 0; i < numTestScores; i++) {
                testScores[i] = right.testScores[i];
            }
        }
        return *this;
    }
};
#endif // CPP_DATA_STRUCTURE_STUDENTTESTSCORES_H
