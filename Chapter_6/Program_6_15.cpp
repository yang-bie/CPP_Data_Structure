//
// Created by Yang on 7/23/25.
//
// This program uses a function that returns true or false.
#include <iostream>
using namespace std;

// Function Prototype
bool isEven(int);

int main() {
  int val;

  // Get a number from the user.
  cout << "Enter an integer and I will tell you "
       << "if it is  even or odd: ";
  cin >> val;

  // Indicates whether it is even or odd.
  if (isEven(val))
    cout << val << " is even.\n";
  else
    cout << val << " is odd.\n";
  return 0;
}

//
// Definition of function isEven. This function accepts an
// integer argument and tests it to be even or odd. The function
// returns true if the argument is even or false if the argument
// is odd. The return value is a bool.
//

bool isEven(int number) {
  bool status;

  if (number % 2 == 0)
    status = true;    // The number is even if there is no reminder.
  else
    status = false;   // Otherwise, the number is odd.
  return status;
}