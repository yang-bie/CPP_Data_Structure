//
// Created by Yang on 8/19/25.
//
// Implementation file for Box class.
#include "Box.h"

Box::Box(double w, double l, double h) : Rectangle(w, l) {
    height = h;
    volume = getArea() * h;
}

