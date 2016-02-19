#include <string>
using namespace std;

class SelectionMenu
{
public:
  SelectionMenu(string [], int);
  void displayMenu();
  int selectFromMenu();
private:
  string options[9];
  int sz;
};
