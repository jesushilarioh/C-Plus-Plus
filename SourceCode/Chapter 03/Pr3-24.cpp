// This program asks for the lengths of the two sides of a
// right triangle. The length of the hypotenuse is then
// calculated and displayed.
#include <iostream>
#include <iomanip>   // For setprecision
#include <cmath>     // For the sqrt and pow functions
using namespace std;

int main()
{
   double a, b, c;

   cout << "Enter the length of side a: ";
   cin >> a;
   cout << "Enter the length of side b: ";
   cin >> b;
   c = sqrt(pow(a, 2.0) + pow(b, 2.0));
   cout << "The length of the hypotenuse is ";
   cout << setprecision(2) << c << endl;
   return 0;
} 