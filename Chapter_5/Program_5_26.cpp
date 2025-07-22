//
// Created by Yang on 7/22/25.
//
// This program calculates the charges for DVD rentals.
// Every third DVD is free.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int dvdCount = 1;     // DVD counter
  int numDVDS;          // Number of DVDs rented
  double total = 0.0;   // Accumulator
  char current;         // Current release, Y or N

  // Get the number of DVDs.
  cout << "How many DVDs are you being rented? ";
  cin >> numDVDS;

  // Determine the charges.
  do {
    if ((dvdCount % 3) == 0) {
      cout << "DVD #" << dvdCount << " is free!\n";
      continue;   // Immediately start the next iteration
    }
    cout << "Is DVD #" <<dvdCount << " a current release? (Y/N)";
    cin >> current;
    if (current == 'Y' || current == 'y')
      total += 3.50;
    else
      total += 2.50;
  } while (dvdCount++ < numDVDS);

  // Display the total.
  cout << fixed << setprecision(2);
  cout << "The total is $" << total << endl;
  return 0;
}