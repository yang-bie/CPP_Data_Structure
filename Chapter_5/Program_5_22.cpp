//
// Created by Yang on 7/21/25.
//
// This program reads data from file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream inputFile;
  //int number;
  string name;

  // Open the file.
  //inputFile.open("ListOfNumbers.txt");
  inputFile.open("Friends.txt");

  // Read the numbers from the file and display them.
  //while (inputFile >> number) {
  //  cout << number << endl;
  //}

  while (getline(inputFile, name)) {
    cout << name << endl;
  }

  // Close the file.
  inputFile.close();
  return 0;
}