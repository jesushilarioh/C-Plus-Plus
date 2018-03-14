// This program uses a function to return a structure. This
// is a modification of Program 11-2.
#include <iostream>
#include <iomanip>
#include <cmath>  // For the pow function
using namespace std;

// Constant for Pi.
const double PI = 3.14159;

// Structure declaration
struct Circle
{
   double radius;      // A circle's radius
   double diameter;    // A circle's diameter
   double area;        // A circle's area
};

// Function prototype
Circle getInfo();

int main()
{
   Circle c;      // Define a structure variable

   // Get data about the circle.
   c = getInfo();
   
   // Calculate the circle's area.
   c.area = PI * pow(c.radius, 2.0);
   
   // Display the circle data.
   cout << "The radius and area of the circle are:\n";
   cout << fixed << setprecision(2);
   cout << "Radius: " << c.radius << endl;
   cout << "Area: " << c.area << endl;
   return 0;
}

//***************************************************************
// Definition of function getInfo. This function uses a local   *
// variable, tempCircle, which is a circle structure. The user  *
// enters the diameter of the circle, which is stored in        *
// tempCircle.diameter. The function then calculates the radius *
// which is stored in tempCircle.radius. tempCircle is then     *
// returned from the function.                                  *
//***************************************************************

Circle getInfo()
{
   Circle tempCircle;  // Temporary structure variable

   // Store circle data in the temporary variable.
   cout << "Enter the diameter of a circle: ";
   cin >> tempCircle.diameter;
   tempCircle.radius = tempCircle.diameter / 2.0;
   
   // Return the temporary variable.
   return tempCircle;
}