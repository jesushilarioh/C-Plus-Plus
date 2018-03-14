// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getRadius();
double square(double);

int main()
{
   const double PI = 3.14159; // Constant for pi
   double radius;             // To hold the circle's radius
   double area;               // To hold the circle's area

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(2);
   
   // Get the radius of the circle.
   cout << "This program calculates the area of ";
   cout << "a circle.\n";
   radius = getRadius();
   
   // Caclulate the area of the circle.
   area = PI * square(radius);
   
   // Display the area.
   cout << "The area is " << area << endl;
   return 0;
}

//******************************************************
// Definition of function getRadius.                   *
// This function asks the user to enter the radius of  *
// the circle and then returns that number as a double.*
//******************************************************

double getRadius()
{
   double rad;

   cout << "Enter the radius of the circle: ";
   cin >> rad;
   return rad;
}

//******************************************************
// Definition of function square.                      *
// This function accepts a double argument and returns *
// the square of the argument as a double.             *
//******************************************************

double square(double number)
{
   return number * number;
}