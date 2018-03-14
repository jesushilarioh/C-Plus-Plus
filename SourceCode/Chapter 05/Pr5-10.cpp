// This program demonstrates a user controlled for loop.
#include <iostream>
using namespace std;

int main()
{
   int minNumber,   // Starting number to square
       maxNumber;   // Maximum number to square

   // Get the minimum and maximum values to display.
   cout << "I will display a table of numbers and "
        << "their squares.\n"
        << "Enter the starting number: ";
   cin >> minNumber;
   cout << "Enter the ending number: ";
   cin >> maxNumber;

   // Display the table.
   cout << "Number Number Squared\n"
        << "-------------------------\n";

   for (int num = minNumber; num <= maxNumber; num++)
      cout << num << "\t\t" << (num * num) << endl;

   return 0;
} 