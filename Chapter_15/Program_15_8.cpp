//
// Created by Yang on 8/20/25.
//
// This program demonstrates that when a derived class function
// overrides a class function, objects of the base class
// still call the base class version of the function.
#include <iostream>
using namespace std;

class BaseClass {
public:
    void showMessage() {
        cout << "This is the base class.\n";
    }
};

class DerivedClass : public BaseClass {
public:
    void showMessage() {
        cout << "This is the derived class.\n";
    }
};

int main() {
    BaseClass b;
    DerivedClass d;

    b.showMessage();
    d.showMessage();

    return 0;
}