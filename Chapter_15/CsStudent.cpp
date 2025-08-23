//
// Created by Yang on 8/21/25.
//
#include "CsStudent.h"
#include <iostream>
using namespace std;

//

int CsStudent::getRemainingHours() const {
    int reqHours, remainingHours;

    // Calculate the required hours.
    reqHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;

    // Calculate the remaining hours.
    remainingHours = reqHours - (mathHours + csHours + genEdHours);

    // Return the remaining hours.
    return remainingHours;
}
