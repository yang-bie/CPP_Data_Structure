//
// Created by Yang on 7/26/25.
//
// This program demonstrates the vector pop_back member function.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout << "The size of values is " << values.size() << endl;

    // Remove a value from the vector.
    cout << "Popping a value from the vector ...\n";
    values.pop_back();
    cout << "The size of values is " << values.size() << endl;

    cout << "Popping a value from the vector ...\n";
    values.pop_back();
    cout << "The size of values is " << values.size() << endl;

    cout << "Popping a value from the vector ...\n";
    values.pop_back();
    cout << "The size of values is " << values.size() << endl;

    return 0;
}

