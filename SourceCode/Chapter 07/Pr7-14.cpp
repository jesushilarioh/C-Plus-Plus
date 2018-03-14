// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int ARRAY_SIZE = 100; // Array size
   int numbers[ARRAY_SIZE];    // Array with 100 elements
   int count = 0;              // Loop counter variable
   ifstream inputFile;         // Input file stream object
   
   inputFile.open("numbers.txt"); // Open the file.
   
   // Read the numbers from the file into the array.
   // After this loop executes, the count variable will hold
   // the number of values that were stored in the array.
   while (count < ARRAY_SIZE && inputFile >> numbers[count])
      count++;
   
   // Close the file.
   inputFile.close();
   
   // Display the numbers read.
   cout << "The numbers are: ";
   for (int index = 0; index < count; index++)
      cout << numbers[index] << " ";
   cout << endl;
   return 0;
}