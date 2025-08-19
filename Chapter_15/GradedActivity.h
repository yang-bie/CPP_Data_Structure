//
// Created by Yang on 8/18/25.
//
// Specification file for GradedActivity class.
#ifndef CPP_DATA_STRUCTURE_GRADEDACTIVITY_H
#define CPP_DATA_STRUCTURE_GRADEDACTIVITY_H

class GradedActivity {
private:
    double score; // To hold the numeric score
public:
    // Default constructor
    GradedActivity(){ score = 0; }

    // Constructor
    GradedActivity(double s) { score = s; }

    // Mutator function
    void setScore(double s) { score = s; }

    // Accessor function
    double getScore() { return score; }

    char getLetterGrade() const;
};

#endif // CPP_DATA_STRUCTURE_GRADEDACTIVITY_H
