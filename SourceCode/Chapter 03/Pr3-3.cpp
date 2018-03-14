// This program demonstrates how cin can read multiple values
// of different data types.
#include <iostream>
using namespace std;

int main()
{
   int whole;
   double fractional;
   char letter;

   cout << "Enter an integer, a double, and a character: ";
   cin >> whole >> fractional >> letter;
   cout << "Whole: " << whole << endl;
   cout << "Fractional: " << fractional << endl;
   cout << "Letter: " << letter << endl;
   return 0;
}