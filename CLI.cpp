#include <iostream>
#include <string>
#include "CLI.h"
using namespace std;

std::string CLI::getUserInput (std::string prompt)
{
  string input = "";
  cout << prompt << "\n>> ";
  cin >> input;
  return input;
}

