// This program calls the Rectangle class constructor.
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
   double houseWidth,   // To hold the room width
          houseLength;  // To hold the room length

   // Get the width of the house.
   cout << "In feet, how wide is your house? ";
   cin >> houseWidth;

   // Get the length of the house.
   cout << "In feet, how long is your house? ";
   cin >> houseLength;
   
   // Create a Rectangle object.
   Rectangle house(houseWidth, houseLength );
   
   // Display the house's width, length, and area.
   cout << setprecision(2) << fixed;
   cout << "The house is " << house.getWidth()
        << " feet wide.\n";
   cout << "The house is " << house.getLength()
        << " feet long.\n";
   cout << "The house has " << house.getArea()
        << " square feet of area.\n";
   return 0;
} 