//
// Created by Yang on 7/21/25.
//
// This program reads numbers from a file.
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream inputFile;
  int value1, value2, value3, sum;

  // Open the file.
  inputFile.open("Friends.txt");

  // Read the three numbers from the file.
  inputFile >> value1;
  inputFile >> value2;
  inputFile >> value3;

  // Close the file.
  inputFile.close();

  // Calculate the sum of three numbers.
  sum = value1 + value2 + value3;

  // Display the three numbers.
  cout << "Here are the three numbers:\n"
       << value1 << " " << value2
       << " " << value3 << endl;

  // Display the sum of three numbers.
  cout << "Their sum is: " << sum << endl;
  return 0;
}