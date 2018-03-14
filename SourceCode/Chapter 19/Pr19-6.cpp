// This program demonstrates a recursive function
// that calculates Fibonacci numbers.
#include <iostream>
using namespace std;

// Function prototype
int fib(int);

int main()
{
   cout << "The first 10 Fibonacci numbers are:\n";
   for (int x = 0; x < 10; x++)
      cout << fib(x) << " ";
   cout << endl;
   return 0;
}

//*****************************************
// Function fib. Accepts an int argument  *
// in n. This function returns the nth    *
// Fibonacci number.                      *
//*****************************************

int fib(int n)
{
   if (n <= 0)
      return 0;                       // Base case
   else if (n == 1)
      return 1;                       // Base case
   else
      return fib(n - 1) + fib(n - 2); // Recursive case
}