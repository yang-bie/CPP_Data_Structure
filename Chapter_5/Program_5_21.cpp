//
// Created by Yang on 7/21/25.
//
// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outputFile("Sales.txt");   // File stream object and open file
  int numberOfDays;                     // Number of days of sales
  double sales;                         // Sales amount for a day

  // Get the number of days.
  cout << "For how many days do you have sales? ";
  cin >> numberOfDays;

  // Get the sales for each day and write it to the file.
  for (int count = 1; count <= numberOfDays; count++) {
    // Get the sales for a day.
    cout << "Enter the sales for day " << count << ": ";
    cin >> sales;

    // Write the sales to the file.
    outputFile << sales << endl;
  }

  // Close the file.
  outputFile.close();
  cout << "Data written to Sales.txt\n";
  return 0;
}