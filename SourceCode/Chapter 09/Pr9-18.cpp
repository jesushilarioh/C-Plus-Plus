// This program demonstrates a unique_ptr pointing
// to a dynamically allocated array of integers.
#include <iostream>
#include <memory>
using namespace std;

int main() 
{
   int max;   // Max size of the array

   // Get the number of values to store.
   cout << "How many numbers do you want to enter? ";
   cin >> max;
   
   // Define a unique_ptr smart pointer, pointing
   // to a dynamically allocated array of ints.
   unique_ptr<int[]> ptr( new int[max]);

   // Get values for the array.
   for (int index = 0; index < max; index++)
   {
      cout << "Enter an integer number: ";
      cin >> ptr[index];
   }

   // Display the values in the array.
   cout << "Here are the values you entered:\n";
   for (int index = 0; index < max; index++)
      cout << ptr[index] << endl;

   return 0;
}