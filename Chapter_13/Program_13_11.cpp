//
// Created by Yang on 8/12/25.
//
// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo {
public:
    Demo();
    ~Demo();
};

Demo::Demo() { cout << "Welcome to the constructor!\n"; }

Demo::~Demo() { cout << "Welcome to the destructor!\n"; }


int main() {
    Demo demoObject;
    cout << "This program demonstrates an object\n";
    cout << "with a constructor and destructor.\n";
    return 0;
}
