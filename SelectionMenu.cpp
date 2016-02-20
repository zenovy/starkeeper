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

SelectionMenu::SelectionMenu (MenuType mtype)
{
  switch (mtype) {
    case MenuType::MAINMENU:
      options[0] = "New Game";
      options[1] = "Load Game";
      options[2] = "Quit";
      sz = 3;
      break;
    default:
      sz = 0;
      break;
  }
}

int SelectionMenu::selectFromMenu ()
{
  cout << "Select an option below:\n";
  displayMenu();

  cout << ">> ";
  int selection;
  cin >> selection;
  cout << "-- " << options[selection - 1] << " --\n";
  return selection;
}

