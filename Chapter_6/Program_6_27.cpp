//
// Created by Yang on 7/23/25.
//
// This program uses overloaded functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int square(int);
double square(double);

int main() {
  int userInt;
  double userFloat;

  // Get an int and double.
  cout << "Enter an integer and a floating-point vlaue: ";
  cin >> userInt >> userFloat;

  // Set up numeric output formatting.
  cout << fixed << setprecision(2);

  // Display their squares.
  cout << "Here are their squares: ";
  cout << square(userInt) << " and " << square(userFloat);

  return 0;
}

//***************************************************************
// Definition of overloaded function square.                    *
// This function uses an int parameter, number. It returns the  *
// square of number as an int.                                  *
//***************************************************************

int square(int number) {
  return number * number;
}

//***************************************************************
// Definition of overloaded function square.                    *
// This function uses a double parameter, number. It returns    *
// the square of number as a double.                            *
//***************************************************************

double square(double number) {
  return number * number;
}
