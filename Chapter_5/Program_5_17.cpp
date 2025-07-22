//
// Created by Yang on 7/21/25.
//
// This program writes user input to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outputFile;
  int num1, num2, num3;

  // Open an output file.
  outputFile.open("Numbers.txt");

  // Get three numbers from user.
  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;
  cout << "One more time. Enter a number: ";
  cin >> num3;

  // Write the number to the file.
  outputFile << num1 << endl;
  outputFile << num2 << endl;
  outputFile << num3 << endl;
  cout << "The numbers were saved to a file.\n";

  // Close the file
  outputFile.close();
  cout << "Done.\n";
  return 0;
}