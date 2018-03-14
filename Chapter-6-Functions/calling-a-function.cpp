//***********************************************************
// This program has two functions: main and displayMessage
// and how they are called.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 19th, 2016
//***********************************************************
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
  cout << "Hello from the functions displayMessage.\n";
}

//******************************************
// Function main                           *
//******************************************

int main()
{
  cout << "Hello from main.\n";
  displayMessage();
  cout << "Back in function main again.\n";
  return 0;
}
