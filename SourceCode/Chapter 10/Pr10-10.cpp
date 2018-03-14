// This program demonstrates the strcmp and atoi functions.
#include <iostream>
#include <cctype>       // For tolower
#include <cstring>      // For strcmp
#include <cstdlib>      // For atoi
using namespace std;

int main()
{
   const int SIZE = 20;  // Array size
   char input[SIZE];     // To hold user input
   int total = 0;        // Accumulator
   int count = 0;        // Loop counter
   double average;       // To hold the average of numbers

   // Get the first number.
   cout << "This program will average a series of numbers.\n";
   cout << "Enter the first number or Q to quit: ";
   cin.getline(input, SIZE);

   // Process the number and subsequent numbers.
   while (tolower(input[0]) != 'q')
   {
      total += atoi(input);   // Keep a running total
      count++;                // Count the numbers entered
      // Get the next number.
      cout << "Enter the next number or Q to quit: ";
      cin.getline(input, SIZE);
   }

   // If any numbers were entered, display their average.
   if (count != 0)
   {
      average = static_cast<double>(total) / count;
      cout << "Average: " << average << endl;
   }
   return 0;
}