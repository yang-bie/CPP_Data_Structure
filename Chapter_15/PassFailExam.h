//
// Created by Yang on 8/20/25.
//

#ifndef CPP_DATA_STRUCTURE_PASSFAILEXAM_H
#define CPP_DATA_STRUCTURE_PASSFAILEXAM_H
#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity {
public:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:
    // Default constructor
    PassFailExam() : PassFailActivity() {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

    // Constructor
    PassFailExam(int numQuestions, int numMissed, double minPassingScore) : PassFailActivity(minPassingScore) {
        set(numQuestions, numMissed);
    }

    // Mutator
    void set(int, int);

    // Accessor
    double getNumQuestion() const { return numQuestions; }

    double getPointsEach() const { return pointsEach; }

    int getNumMissed() const { return numMissed; }
};
#endif // CPP_DATA_STRUCTURE_PASSFAILEXAM_H
