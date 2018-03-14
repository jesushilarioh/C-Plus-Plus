// This program uses a function to duplicate
// an int array of any size.
#include <iostream>
using namespace std;

// Function prototype
int *duplicateArray(const int *, int);
void displayArray(const int[], int);

int main()
{
   // Define constants for the array sizes.
   const int SIZE1 = 5, SIZE2 = 7, SIZE3 = 10;

   // Define three arrays of different sizes.
   int array1[SIZE1] = { 100, 200, 300, 400, 500 };
   int array2[SIZE2] = { 10, 20, 30, 40, 50, 60, 70 };
   int array3[SIZE3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

   // Define three pointers for the duplicate arrays.
   int *dup1 = nullptr, *dup2 = nullptr, *dup3 = nullptr;

   // Duplicate the arrays.
   dup1 = duplicateArray(array1, SIZE1);
   dup2 = duplicateArray(array2, SIZE2);
   dup3 = duplicateArray(array3, SIZE3);

   // Display the original arrays.
   cout << "Here are the original array contents:\n";
   displayArray(array1, SIZE1);
   displayArray(array2, SIZE2);
   displayArray(array3, SIZE3);

   // Display the new arrays.
   cout << "\nHere are the duplicate arrays:\n";
   displayArray(dup1, SIZE1);
   displayArray(dup2, SIZE2);
   displayArray(dup3, SIZE3);

   // Free the dynamically allocated memory and
   // set the pointers to 0.
   delete [] dup1;
   delete [] dup2;
   delete [] dup3;
   dup1 = nullptr;
   dup2 = nullptr;
   dup3 = nullptr;
   return 0;
}
//*****************************************************
// The duplicateArray function accepts an int array   *
// and an int that indicates the array's size. The    *
// function creates a new array that is a duplicate   *
// of the argument array and returns a pointer to the *
// new array. If an invalid size is passed the        *
// function returns null.                             *
//*****************************************************

int *duplicateArray(const int *arr, int size)
{
   int *newArray = nullptr;

   // Validate the size. If 0 or a negative
   // number was passed, return a null pointer.
   if (size <= 0)
      return nullptr;

   // Allocate a new array.
   newArray = new int[size];

   // Copy the array's contents to the
   // new array.
   for (int index = 0; index < size; index++)
      newArray[index] = arr[index];

   // Return a pointer to the new array.
   return newArray;
}

//**************************************************
// The displayArray function accepts an int array  *
// and its size as arguments and displays the      *
// contents of the array.                          *
//**************************************************

void displayArray(const int arr[], int size)
{
   for (int index = 0; index < size; index++)
      cout << arr[index] << " ";
   cout << endl;
}