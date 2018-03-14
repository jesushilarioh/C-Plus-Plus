// This program demonstrates the the FeetInches class's
// conversion functions.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
   double d;  // To hold double input
   int i;     // To hold int input

   // Define a FeetInches object.
   FeetInches distance;

   // Get a distance from the user.
   cout << "Enter a distance in feet and inches:\n";
   cin >> distance;

   // Convert the distance object to a double.
   d = distance;

   // Convert the distance object to an int.
   i = distance;

   // Display the values.
   cout << "The value " << distance;
   cout << " is equivalent to " << d << " feet\n";
   cout << "or " << i << " feet, rounded down.\n";
   return 0;
}