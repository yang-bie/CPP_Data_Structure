//
// Created by Yang on 7/9/25.
//
/* This program asks the user to enter the length and width of
   rectangle. It calculates the rectangle's area anda displays
   the value on the screen.
*/
#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "This program calculates the area of a "
            << "rectangle.\n";
    cout << "Enter the length and width of the rectangle ";
    cout << "separated by a spce.\n";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;

    return 0;
}
