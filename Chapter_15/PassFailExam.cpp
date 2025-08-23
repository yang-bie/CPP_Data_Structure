//
// Created by Yang on 8/20/25.
//
#include "PassFailExam.h"

void PassFailExam::set(int numQuestions, int numMissed) {
    // Calculate the points for each question
    this->pointsEach = 100.0 / numQuestions;

    // Set the number fof questions and number missed
    this->numQuestions = numQuestions;
    this->numMissed = numMissed;

    // Calculate and set the numeric score for this exam
    this->setScore(100.0 - numMissed * pointsEach);
}
