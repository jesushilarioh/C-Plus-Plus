// This program can be used to see how your system handles
// floating point overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
   float test;

   test = 2.0e38 * 1000;    // Should overflow test.
   cout << test << endl;
   test = 2.0e-38 / 2.0e38; // Should underflow test.
   cout << test << endl;
   return 0;
}