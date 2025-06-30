//
// Created by imyan on 6/30/2025.
//
// This a program calculates the user's pay
#include <iostream>
using namespace std;

int main() {
  double hours, rate, pay;

  // Get the number of hours worked
  cout << "How many hours did you work? ";
  cin >> hours;

  // Get the hourly pay rate
  cout << "How much do you get paid per hour? ";
  cin >> rate;

  // Get the pay
  pay = hours * rate;

  // Display the pay
  cout << "You have earned $" << pay << endl;
   return 0;
}

