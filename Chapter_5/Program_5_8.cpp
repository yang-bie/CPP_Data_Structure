//
// Created by Yang on 7/20/25.
//
// This  program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program until the
// user selects item 4 from the menu.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Constants for menu choices
  const int ADULT_CHOICE = 1, CHILD_CHOICE = 2, SENIOR_CHOICE = 3,
            QUIT_CHOICE = 4;

  // Constants for membership rates
  const double ADULT = 40.0, CHILD = 20.0, SENIOR = 30.0;

  // Variables
  int choice;      // Menu choice
  int months;      // Number of months
  double charges;  // Monthly charges

  // Set up a numeric output formatting.
  cout << fixed << setprecision(2);

  do {
    // Display the menu.
    cout << "\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice: ";
    cin >> choice;

    // Validate the menu selection.
    while (choice < ADULT_CHOICE || choice > QUIT_CHOICE) {
      cout << "Please enter a valid menu choice: ";
      cin >> choice;
    }

    // Process the user's choice.
    if (choice != QUIT_CHOICE) {
      // Get the number of months.
      cout << "For how many months? ";
      cin >> months;

      // Validate the months.
      while (months <= 0) {
        cout << "Please enter a valid months: ";
        cin >> months;
      }

      // Respond to the user's menu selection.
      switch (choice) {
        case ADULT_CHOICE:
          charges = ADULT * months;
          break;
        case CHILD_CHOICE:
          charges = CHILD * months;
          break;
        case SENIOR_CHOICE:
          charges = SENIOR * months;
      }

      // Display the monthly charges.
      cout << "The total charges are $" << charges << endl;
    }
  } while (choice != QUIT_CHOICE);
  return 0;
}