// This program demonstrates the FeetInches class's overloaded
// relational operators.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
   int feet, inches;  // To hold input for feet and inches

   // Create two FeetInches objects. The default arguments
   // for the constructor will be used.
   FeetInches first, second;

   // Get a distance from the user.
   cout << "Enter a distance in feet and inches: ";
   cin >> feet >> inches;

   // Store the distance in first.
   first.setFeet(feet);
   first.setInches(inches);

   // Get another distance.
   cout << "Enter another distance in feet and inches: ";
   cin >> feet >> inches;

   // Store the distance in second.
   second.setFeet(feet);
   second.setInches(inches);

   // Compare the two objects.
   if (first == second)
      cout << "first is equal to second.\n";
   if (first > second)
      cout << "first is greater than second.\n";
   if (first < second)
      cout << "first is less than second.\n";

   return 0;
}