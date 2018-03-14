// The function displayMessage is repeatedly called from a loop.
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "Hello from main.\n";
   for (int count = 0; count < 5; count++)
      displayMessage(); // Call displayMessage
   cout << "Back in function main again.\n";
   return 0;
}