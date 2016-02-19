#include <iostream>
#include <string>
#include "SelectionMenu.h"
#include "UserPrefs.h"

using namespace std;

string getUserInput (string prompt) {
  string input = "";
  cout << prompt << "\n>> ";
  cin >> input;
  return input;
}

int main (int args, char *argv[]) {
  string nameInput = getUserInput("Please enter a name..."); 
  UserPrefs thisUser(nameInput);
  cout << "You entered: \"" << thisUser.getName() << "\".\n";

  string menuOptions[] = {"New Game","Load Game","Quit"};
  SelectionMenu menu(menuOptions, 3);
  int selection = menu.selectFromMenu();
  cout << "You entered: " << selection << "\n";
  return 0;
}
