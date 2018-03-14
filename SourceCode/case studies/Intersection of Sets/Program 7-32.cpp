// This program allows the user to enter two sets of numbers.
// It finds the intersection of the two sets (which is the
// set of numbers contained in both sets). The intersecting
// values are displayed.
#include <iostream>
using namespace std;

// Function Prototypes
void getArrays(int [], int [], int);
int findIntersection(int [], int [], int [], int);
void displayIntValues(int [], int);

int main()
{
   const int NUM_VALUES = 10;    // Number of values in each array
   int set1[NUM_VALUES],         // First set
       set2[NUM_VALUES],         // Second set
       intersection[NUM_VALUES], // Set containing intersection values
       numIntValues;             // number of values in intersection

   // Get values for the sets.
   getArrays(set1, set2, NUM_VALUES);
   
   // Find the intersection of the two sets
   numIntValues = findIntersection(set1, set2,
                     intersection, NUM_VALUES);
   
   // Display the intersecting values
   displayIntValues(intersection, numIntValues);
   return 0;
}

//********************************************************
// Definition of function getArrays                      *
// This function accepts two int arrays as arguments.    *
// It prompts the user to enter 10 values for each array *
//********************************************************

void getArrays(int first[], int second[], int size)
{
   // Get values for first array.
   cout << "Enter 10 values for the first set:\n";
   for (int index = 0; index < size; index++)
      cin >> first[index];
      
   // Get values for second array.
   cout << "Enter 10 values for the second set:\n";
   for (int index = 0; index < size; index++)
      cin >> second[index];
}


//************************************************************
// Definition of function findIntersection                   *
// This functon accepts three arrays as arguments.           *
// The first two arrays (first and second) are scanned,      *
// and all values appearing in both are stored in the        *
// third array (intersect). The number of values that appear *
// in both arrays is returned.                               *
//************************************************************

int findIntersection(int first[], int second[], int intersect[], int size)
{
   int intCount = 0, // Number of intersecting values
      index3 = 0;    // Subscript variable for intersect array

   for (int index1 = 0; index1 < size; index1++)
   {
      for(int index2 = 0; index2 < size; index2++)
      {
         if (first[index1] == second[index2])
         {
            intersect[index3] = first[index1];
            index3++;
            intCount++;
         }
      }
   }
   return intCount;  // Return the number of intersecting values.
}

//*******************************************************
// Definition of function displayIntValues              *
// This function acepts two arguments: an array of ints *
// and an int. The second argument is the number of     *
// valid elements contained in the array.               *
// These values are displayed, if there are any.        *
//*******************************************************

void displayIntValues(int intersect[], int num)
{
   if (!num)
      cout << "There are no intersecting values.\n";
   else
   {
      cout << "Here is a list of the intersecting values:\n";
      for (int index = 0; index < num; index++)
         cout << intersect[index] << " ";
      cout << endl;
   }
}