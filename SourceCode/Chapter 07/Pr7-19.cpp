// This program uses a function to double the value of
// each element of an array.
#include <iostream>
using namespace std;

// Function prototypes
void doubleArray(int [], int);
void showValues(int [], int);

int main()
{
   const int ARRAY_SIZE = 7;
   int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

   // Display the initial values.
   cout << "The arrays values are:\n";
   showValues(set, ARRAY_SIZE);

   // Double the values in the array.
   doubleArray(set, ARRAY_SIZE);

   // Display the resulting values.
   cout << "After calling doubleArray the values are:\n";
   showValues(set, ARRAY_SIZE);

   return 0;
}

//*****************************************************
// Definition of function doubleArray                 *
// This function doubles the value of each element    *
// in the array passed into nums. The value passed    *
// into size is the number of elements in the array.  *
//*****************************************************

void doubleArray(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      nums[index] *= 2;
}

//**************************************************
// Definition of function showValues.              *
// This function accepts an array of integers and  *
// the array's size as its arguments. The contents *
// of the array are displayed.                     * 
//**************************************************

void showValues(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}