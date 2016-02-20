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

  MenuType mtype = MenuType::MAINMENU;
  SelectionMenu menu(mtype);

  int selection = menu.selectFromMenu();
  return 0;
}
