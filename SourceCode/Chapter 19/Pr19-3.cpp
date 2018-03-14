// This program demonstrates a recursive function to
// calculate the factorial of a number.
#include <iostream>
using namespace std;

// Function prototype
int factorial(int);

int main()
{
   int number;

   // Get a number from the user.
   cout << "Enter an integer value and I will display\n";
   cout << "its factorial: ";
   cin >> number;
   
   // Display the factorial of the number.
   cout << "The factorial of " << number << " is ";
   cout << factorial(number) << endl;
   return 0;
}

//*************************************************************
// Definition of factorial. A recursive function to calculate *
// the factorial of the parameter n.                          *
//*************************************************************

int factorial(int n)
{
   if (n == 0)
      return 1;                    // Base case
   else
      return n * factorial(n - 1); // Recursive case
}