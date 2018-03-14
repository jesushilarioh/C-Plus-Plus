// This program demonstrates integer overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
   // testVar is initialized with the maximum value for a short.
   short testVar = 32767;

   // Display testVar.
   cout << testVar << endl;
   
   // Add 1 to testVar to make it overflow.
   testVar = testVar + 1;
   cout << testVar << endl;
   
   // Subtract 1 from testVar to make it underflow.
   testVar = testVar - 1;
   cout << testVar << endl;
   return 0;
} 