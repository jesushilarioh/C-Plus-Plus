// This program uses a function that returns a value.
#include <iostream>
using namespace std;

// Function prototype
int sum(int, int);

int main()
{
   int value1 = 20,   // The first value
       value2 = 40,   // The second value
       total;         // To hold the total

   // Call the sum function, passing the contents of
   // value1 and value2 as arguments. Assign the return
   // value to the total variable.
   total = sum(value1, value2);
   
   // Display the sum of the values.
   cout << "The sum of " << value1 << " and "
        << value2 << " is " << total << endl;
   return 0;
}

//*****************************************************
// Definition of function sum. This function returns  *
// the sum of its two parameters.                     *
//*****************************************************

int sum(int num1, int num2)
{
   return num1 + num2;
}