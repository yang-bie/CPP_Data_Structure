//
// Created by Yang on 7/26/25.
//
// This program demonstrates the vector size member function.
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main() {
    vector<int> values;

    // Put a series of numbers in the vector.
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    // Display the values
    showValues(values);
    return 0;
}

//***********************************************
// Definition of function showValues.
// This function accepts an int vector as its
// argument. The value of each of the vector's
// elements is displayed.
//***********************************************

void showValues(vector<int> vect) {
    for (int index = 0; index < vect.size(); index++)
        cout << vect[index] << endl;
}
