//
// Created by Yang on 8/18/25.
//
// Specification file for FinalExam class.
#ifndef CPP_DATA_STRUCTURE_FINALEXAM_H
#define CPP_DATA_STRUCTURE_FINALEXAM_H
#include "GradedActivity.h"

class FinalExam : public GradedActivity {
private:
    int numQuestions; // Number of questions
    double pointsEach; // Points for each question
    int numMissed; // Number of questions missed
public:
    // Default constructor
    FinalExam() {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

    // Constructor
    FinalExam(int questions, int missed) { set(questions, missed); }

    // Mutator function
    void set(int, int); // Defined in FinalExam.cpp

    // Accessor function
    int getNumQuestions() const { return numQuestions; }

    double getPointsEach() const { return pointsEach; }

    int getNumMissed() const { return numMissed; }
};


#endif // CPP_DATA_STRUCTURE_FINALEXAM_H
