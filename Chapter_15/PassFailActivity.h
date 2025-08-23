//
// Created by Yang on 8/20/25.
//

#ifndef CPP_DATA_STRUCTURE_PASSFAILACTIVITY_H
#define CPP_DATA_STRUCTURE_PASSFAILACTIVITY_H
#include <algorithm>


#include "GradedActivity.h"

class PassFailActivity : public GradedActivity {
private:
    double minPassingScore;

public:
    // Default constructor
    PassFailActivity() : GradedActivity() { minPassingScore = 0.0; }

    // Constructor
    PassFailActivity(double minPassingScore) : GradedActivity() { this->minPassingScore = minPassingScore; }

    // Mutator
    void setMinPassingScore(double minPassingScore) { this->minPassingScore = minPassingScore; }

    // Accessor
    double getMinPassingScore() const { return minPassingScore; }

    virtual char getLetterGrade() const;
};
#endif // CPP_DATA_STRUCTURE_PASSFAILACTIVITY_H
