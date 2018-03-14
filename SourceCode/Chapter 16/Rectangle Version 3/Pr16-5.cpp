// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
   int width;
   int length;
   
   // Create a Rectangle object.
   Rectangle myRectangle;

   // Get the width and length.
   cout << "Enter the rectangle's width: ";
   cin >> width;
   cout << "Enter the rectangle's length: ";
   cin >> length;
   
   // Store these values in the Rectangle object.
   try
   {
      myRectangle.setWidth(width);
      myRectangle.setLength(length);
      cout << "The area of the rectangle is "
           << myRectangle.getArea() << endl;
   }
   catch (Rectangle::NegativeWidth e)
   {
      cout << "Error: " << e.getValue() 
           << " is an invalid value for the"
           << " rectangle's width.\n";
   }
   catch (Rectangle::NegativeLength e)
   {
      cout << "Error: " << e.getValue() 
           << " is an invalid value for the"
           << " rectangle's length.\n";
   }

   cout << "End of the program.\n";
   return 0;
}