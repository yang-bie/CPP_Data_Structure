//
// Created by Yang on 8/20/25.
//
#include "PassFailActivity.h"

//******************************************************
// Member function PassFailActivity::getLetterGrade
// This function returns 'P' if the score is passing.
// otherwise it returns 'F'.
//******************************************************

char PassFailActivity::getLetterGrade() const {
    char letterGrade;

    if (getScore() >= minPassingScore)
        letterGrade = 'P';
    else
        letterGrade = 'F';

    return letterGrade;
}
