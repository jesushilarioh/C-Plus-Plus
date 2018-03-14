// This program demonstrates the FeetInches class' overloaded 
// prefix and postfix ++ operators.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
   int count;   // Loop counter

   // Define a FeetInches object with the default
   // value of 0 feet, 0 inches.
   FeetInches first;
   
   // Define a FeetInches object with 1 foot 5 inches.
   FeetInches second(1, 5);

   // Use the prefix ++ operator.
   cout << "Demonstrating prefix ++ operator.\n";
   for (count = 0; count < 12; count++)
   {
      first = ++second;
      cout << "first: " << first.getFeet() << " feet, ";
      cout << first.getInches() << " inches. ";
      cout << "second: " << second.getFeet() << " feet, ";
      cout << second.getInches() << " inches.\n";
   }

   // Use the postfix ++ operator.
   cout << "\nDemonstrating postfix ++ operator.\n";
   for (count = 0; count < 12; count++)
   {
      first = second++;
      cout << "first: " << first.getFeet() << " feet, ";
      cout << first.getInches() << " inches. ";
      cout << "second: " << second.getFeet() << " feet, ";
      cout << second.getInches() << " inches.\n";
   }

   return 0;
}