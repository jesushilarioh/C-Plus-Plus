// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>     // For the time function
using namespace std;

// Function prototype
int *getRandomNumbers(int);

int main()
{
   int *numbers;  // To point to the numbers
   
   // Get an array of five random numbers.
   numbers = getRandomNumbers(5);
   
   // Display the numbers.
   for (int count = 0; count < 5; count++)
      cout << numbers[count] << endl;

   // Free the memory.
   delete [] numbers;
   numbers = 0;
   return 0;
}

//**************************************************
// The getRandomNumbers function returns a pointer *
// to an array of random integers. The parameter   *
// indicates the number of numbers requested.      *
//**************************************************

int *getRandomNumbers(int num)
{
   int *arr = nullptr;	// Array to hold the numbers
   
   // Return null if num is zero or negative.
   if (num <= 0)
      return NULL;
   
   // Dynamically allocate the array.
   arr = new int[num];
   
   // Seed the random number generator by passing
   // the return value of time(0) to srand.
   srand( time(0) );
   
   // Populate the array with random numbers.
   for (int count = 0; count < num; count++)
      arr[count] = rand();
      
   // Return a pointer to the array.
   return arr;
}