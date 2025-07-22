//
// Created by Yang on 7/21/25.
//
// This program reads data from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream inputFile;
  string name1, name2, name3;

  // Open the file
  inputFile.open("Friends.txt");
  cout << "Reading data from the file.\n";

  getline(inputFile, name1);    // Reading name 1 from the file
  cout << name1 << endl;

  getline(inputFile, name2);     // Reading name 2 from the file
  cout << name2 << endl;

  getline(inputFile, name3);     // Reading name 3 from the file
  cout << name3 << endl;

  // Close the file
  inputFile.close();
  return 0;
}