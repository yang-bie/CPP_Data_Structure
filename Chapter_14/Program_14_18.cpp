//
// Created by Yang on 8/18/25.
//
#include "Person.h"
using namespace std;

// Function prototyper
Person makePerson();
void displayPerson(Person);

int main() {
    Person person;
    person = makePerson();
    displayPerson(person);
    return 0;
}

Person makePerson() {
    Person p("Will MackKenzie");
    return p;
}

void displayPerson(Person p2) { cout << p2.getName() << endl; }
