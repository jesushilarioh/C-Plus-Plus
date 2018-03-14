// This program asks the user for two numbers, num1 and num2.
// num1 is divided by num2 and the result is displayed.
// Before the division operation, however, num2 is tested
// for the value 0. If it contains 0, the division does not
// take place.
#include <iostream>
using namespace std;

int main()
{
   double num1, num2, quotient;

   // Get the first number.
   cout << "Enter a number: ";
   cin >> num1;
   
   // Get the second number.
   cout << "Enter another number: ";
   cin >> num2;
   
   // If num2 is not zero, perform the division.
   if (num2 == 0)
   {
      cout << "Division by zero is not possible.\n";
      cout << "Please run the program again and enter\n";
      cout << "a number other than zero.\n";
   }
   else
   {
      quotient = num1 / num2;
      cout << "The quotient of " << num1 << " divided by ";
      cout<< num2 << " is " << quotient << ".\n";
   }
   return 0;
}