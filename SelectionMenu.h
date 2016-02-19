#include <string>
using namespace std;

class SelectionMenu
{
public:
  SelectionMenu(string [], int);
  void displayMenu ();
private:
  string options[9];
  int sz;
};
