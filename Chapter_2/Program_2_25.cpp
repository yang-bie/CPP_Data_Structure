//
// Created by Yang on 7/9/25.
//
// This program converts seconds to minutes and seconds
#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 125;
    int minutes, seconds;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << totalSeconds << " second is equivalent to:\n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}
