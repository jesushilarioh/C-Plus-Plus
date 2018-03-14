// This program uses a function template.
#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for square function.
template <class T>
T square(T number)
{
   return number * number;
}

int main()
{
   int userInt;        // To hold integer input
   double userDouble;  // To hold double input

   cout << setprecision(5);
   cout << "Enter an integer and a floating-point value: ";
   cin >> userInt >> userDouble;
   cout << "Here are their squares: ";
   cout << square(userInt) << " and " 
        << square(userDouble) << endl;
   return 0;
}