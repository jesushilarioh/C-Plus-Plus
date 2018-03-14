// This program demonstrates how floating-point 
// round-off errors can make equality operations unreliable.
#include <iostream>
using namespace std;

int main()
{
   double a = 1.5;            // a is 1.5.
   double b = 1.5;            // b is 1.5.

   a += 0.0000000000000001;   // Add a little to a.
   if (a == b)
      cout << "Both a and b are the same.\n";
   else
      cout << "a and b are not the same.\n";

   return 0;
}