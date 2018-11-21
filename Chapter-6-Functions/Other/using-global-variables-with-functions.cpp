//***********************************************************
// This program shows that a global variable is visible
// to all the functions that appear in a program after
// the variable's declaration.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 21st, 2016
//***********************************************************
#include <iostream>
using namespace std;

void anotherFunction(); // Functions prototype
int num = 2;            // Global variable

int main()
{
  cout << "In main, num is " << num << endl;
  anotherFunction();
  cout << "Back in main, num is " << num << endl;
  return 0;
}

//*******************************************************
// Definition of anotherFunction                        *
// It has a local variable, num, whose initial value    *
// is displayed.                                        *
//*******************************************************

void anotherFunction()
{
  cout << "In anotherFunction, num is " << num << endl;
  num = 50;
  cout << "But, it is now changed to " << num << endl;
}
