#include <string>
using namespace std;

enum class MenuType
{
  MAINMENU
};

class SelectionMenu
{
public:
  SelectionMenu(MenuType);
  void displayMenu();
  int selectFromMenu();
private:
  string options[9];
  int sz;
};
