//*************************************************************
// This function displayMessage is repeatedly called from loop.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 19th, 2016
//*************************************************************
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
  for (int count = 0; count < 5; count++)
  {
    displayMessage(); // Call displayMessage
  }
  cout << "Back in function main again.\n";
  return 0;
}
