// This program demonstrates an enumerated data type.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   enum Water { FREEZING = 32, BOILING = 212 };
   int waterTemp; // To hold the water temperature

   cout << "Enter the current water temperature: ";
   cin >> waterTemp;
   if (waterTemp <= FREEZING)
      cout << "The water is frozen.\n";
   else if (waterTemp >= BOILING)
      cout << "The water is boiling.\n";
   else
      cout << "The water is not frozen or boiling.\n";

   return 0;
}