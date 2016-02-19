#include <iostream>
#include <string>

using namespace std;

class UserPrefs
{
public:
  UserPrefs(string nameInput) :name{nameInput} { }
  string getName() {return name;}
private:
  string name;
};

string getUserInput (string prompt) {
  string input = "";
  cout << prompt << "\n>> ";
  cin >> input;
  return input;
}

int selectionMenu (string options[], int size) {
  cout << "Select an option below:\n";
  for (int i = 0; i < size; i++) {
    cout << "[" << (i + 1) << "] " << options[i] << "\n";
  }

  cout << ">> ";
  int selection;
  cin >> selection;
  return selection;
}

int main (int args, char *argv[]) {
  string nameInput;
  nameInput = getUserInput("Please enter a name..."); 
  UserPrefs thisUser(nameInput);
  cout << "You entered: \"" << thisUser.getName() << "\".\n";

  int selection;
  string menuOptions[] = {"abc","def","ghi"};
  selection = selectionMenu(menuOptions, 3);
  cout << "You entered: " << selection;
  return 0;
}
