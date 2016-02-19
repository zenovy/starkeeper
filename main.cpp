#include <iostream>
#include <string>
#include "SelectionMenu.h"

using namespace std;

class UserPrefs
{
public:
  UserPrefs(string nameInput) :name{nameInput} { }
  string getName() {return name;}
private:
  string name;
};

int selectFromMenu (SelectionMenu &menu)
{
  cout << "Select an option below:\n";
  menu.displayMenu();

  cout << ">> ";
  int selection;
  cin >> selection;
  return selection;
}

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

  string menuOptions[] = {"abc","def","ghi"};
  SelectionMenu menu(menuOptions, 3);
  int selection = selectFromMenu(menu);
  cout << "You entered: " << selection << "\n";
  return 0;
}
