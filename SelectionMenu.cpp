#include "SelectionMenu.h"
#include <string>
#include <iostream>
using namespace std;

void SelectionMenu::displayMenu ()
{
  for (int i = 0; i < sz; i++) {
    cout << "[" << (i + 1) << "] " << options[i] << "\n";
  }
}

SelectionMenu::SelectionMenu (string menuOptions[], int length)
{
  for (int i = 0; i < length; i++) {
    options[i] = menuOptions[i];
  }
  sz = length;
}

int SelectionMenu::selectFromMenu ()
{
  cout << "Select an option below:\n";
  displayMenu();

  cout << ">> ";
  int selection;
  cin >> selection;
  return selection;
}

