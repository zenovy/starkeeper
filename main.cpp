#include <iostream>
#include <string>
#include "SelectionMenu.h"
#include "UserPrefs.h"
#include "CLI.h"
using namespace std;

int main (int args, char *argv[]) {
  string nameInput = CLI::getUserInput("Please enter a name..."); 
  UserPrefs thisUser(nameInput);
  cout << "You entered: \"" << thisUser.getName() << "\".\n";

  string menuOptions[] = {"New Game","Load Game","Quit"};
  SelectionMenu menu(menuOptions, 3);
  int selection = menu.selectFromMenu();
  cout << "You entered: " << selection << "\n";
  return 0;
}
