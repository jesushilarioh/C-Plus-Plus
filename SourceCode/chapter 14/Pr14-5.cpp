// This program demonstrates memberwise assignment.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
   // Define two Rectangle objects.
   Rectangle box1(10.0, 10.0);   // width = 10.0, length = 10.0
   Rectangle box2 (20.0, 20.0);  // width = 20.0, length = 20.0
   
   // Display each object's width and length.
   cout << "box1's width and length: " << box1.getWidth() 
        << " " << box1.getLength() << endl;
   cout << "box2's width and length: " << box2.getWidth() 
        << " " << box2.getLength() << endl << endl;

   // Assign the members of box1 to box2.
   box2 = box1;

   // Display each object's width and length again.
   cout << "box1's width and length: " << box1.getWidth() 
        << " " << box1.getLength() << endl;
   cout << "box2's width and length: " << box2.getWidth() 
        << " " << box2.getLength() << endl;
   
   return 0;
}