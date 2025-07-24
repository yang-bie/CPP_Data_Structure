//
// Created by Yang on 7/23/25.
//
// This program uses a reference variable as a function
// parameter.
#include <iostream>
using namespace std;

// Function prototype. The parameter is a reference variable.
void doubleNum(int &);
void getNum(int &);

int main() {
  int value;

  // Get a number and store it in value.
  getNum(value);
  // cout << "In main, value is " << value << endl;
  // cout << "Now calling doubleNum..." << endl;

  // Double the number stored in value.
  doubleNum(value);
  // cout << "Now back in main. Value is " << value << endl;

  // Display the resulting number.
  cout << "That value doubled is " << value << endl;
  return 0;
}

//*************************************************************
// Definition of getNum.                                      *
// The parameter userNum is a reference variable. The user is *
// asked to enter a number, which is stored in userNum.       *
//*************************************************************

void getNum(int &userNum) {
  cout << "Enter a number: ";
  cin >> userNum;
}

//**********************************************************
// Definition of doubleNum.                                *
// The parameter refVar is a reference variable. The value *
// in refVar is doubled.                                   *
//**********************************************************

void doubleNum(int &refVar) { refVar *= 2; }