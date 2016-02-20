#include <iostream>
#include <string>
#include "CLI.h"
using namespace std;

string CLI::getUserInput (string prompt)
{
  string input = "";
  cout << prompt << "\n>> ";
  cin >> input;
  return input;
}

int CLI::getUserOption ()
{
  int input;
  cout << ">> ";
  cin >> input;
  return input;
}

