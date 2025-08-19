//
// Created by Yang on 8/16/25.
//
#include <iostream>
#include "../Chapter_13/Rectangle.h"
using namespace std;

int main() {
    // Define two Rectangle objects.
    Rectangle box1(10, 10);
    Rectangle box2(20, 20);

    // Display each object's width and length.
    cout << "box1's width and length: " << box1.getWidth() << " " << box1.getLength() << endl;
    cout << "box2's width and length: " << box2.getWidth() << " " << box2.getLength() << endl;

    // Assign the members of box1 to box2.
    box2 = box1;

    // Display each object's width and length.
    cout << "box1's width and length: " << box1.getWidth() << " " << box1.getLength() << endl;
    cout << "box2's width and length: " << box2.getWidth() << " " << box2.getLength() << endl;

    cout << addressof(box1) << " " << addressof(box2);

    return 0;
}