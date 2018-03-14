//**************************************************************
// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 20th, 2016
//**************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getRadius();
double square(double);

int main()
{
  const double PI = 3.14159;  // Constant for pi
  double radius;              // Holds circle's radius
  double area;                // Holds circle's area

  // Set the numeric output formatting.
  cout << fixed << showpoint << setprecision(2);

  // Get the radius of the circle.
  cout << "This program calculates the area of ";
  cout << "a circle. \n";
  radius = getRadius();

  // Calculate the area of circle.
  area = PI * square(radius);

  // Display the area.
  cout << "The area is " << area << endl;
  return 0;
}

//*****************************************************************
// Definition of function getRadius.                              *
// This function asks the user to enter the radius of the circle  *
// the circle and then returns that number as a double.           *
//*****************************************************************

double getRadius()
{
  double rad;   // local variable within the scope of getRadius

  cout << "Enter the radius of the circle: ";
  cin >> rad;
  return rad;
}

//*****************************************************************
// Definition of function square.                                 *
// This function accepts a double argument and returns the square *
// of the argument as a double.                                   *
//*****************************************************************

double square(double number)
{
  return number * number;
}
