// This program demonstrates the FeetInches class's overloaded
// + and - operators.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
   int feet, inches;  // To hold input for feet and inches

   // Create three FeetInches objects. The default arguments
   // for the constructor will be used.
   FeetInches first, second, third;

   // Get a distance from the user.
   cout << "Enter a distance in feet and inches: ";
   cin >> feet >> inches;

   // Store the distance in the first object.
   first.setFeet(feet);
   first.setInches(inches);

   // Get another distance from the user.
   cout << "Enter another distance in feet and inches: ";
   cin >> feet >> inches;

   // Store the distance in second.
   second.setFeet(feet);
   second.setInches(inches);

   // Assign first + second to third.
   third = first + second;

   // Display the result.
   cout << "first + second = ";
   cout << third.getFeet() << " feet, ";
   cout << third.getInches() << " inches.\n";

   // Assign first - second to third.
   third = first - second;

   // Display the result.
   cout << "first - second = ";
   cout << third.getFeet() << " feet, ";
   cout << third.getInches() << " inches.\n";

   return 0;
}