//
// Created by Yang on 8/20/25.
//

#ifndef CPP_DATA_STRUCTURE_CURVEDACTIVITY_H
#define CPP_DATA_STRUCTURE_CURVEDACTIVITY_H
#include "GradedActivity.h"

class CurvedActivity : public GradedActivity {
protected:
    double rawScore; // Unadjusted score
    double percentage; // Curve percentage
public:
    // Default constructor
    CurvedActivity() : GradedActivity() {
        rawScore = 0.0;
        percentage = 0.0;
    }

    // Mutator functions
    void setScore(double score) {
        rawScore = score;
        GradedActivity::setScore( rawScore * percentage);
    }

    void setPercentage(double percentage) {
        this->percentage = percentage;
    }

    // Accessor functions
    double getPercentage() const { return percentage; }

    double getRawScore() const { return rawScore; }
};
#endif // CPP_DATA_STRUCTURE_CURVEDACTIVITY_H
