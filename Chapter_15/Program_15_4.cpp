//
// Created by Yang on 8/19/25.
//
// This program demonstrates the order in which base and
// derived class constructors and destructors are called.
#include <iostream>
using namespace std;

//*******************************
// BaseClass declaration.
//*******************************

class BaseClass {
public:
    BaseClass() { cout << "This is the BaseClass constructor.\n"; }

    ~BaseClass() { cout << "This is the BaseClass destructor.\n"; }
};

//*******************************
// DerivedClass declaration.
//*******************************

class DerivedClass : public BaseClass {
public:
    DerivedClass() { cout << "This is the DerivedClass constructor.\n"; }

    ~DerivedClass() { cout << "This is the DerivedClass destructor.\n"; }
};

//*******************************
// main function
//*******************************

int main() {
    cout << "We will new define a DerivedClass object\n";

    DerivedClass object;

    cout << "The program is now going to end.\n";

    return 0;
}