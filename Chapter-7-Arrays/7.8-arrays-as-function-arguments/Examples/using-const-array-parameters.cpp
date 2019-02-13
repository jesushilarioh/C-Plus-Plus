//*********************************************************************
// This program uses a function to double the value of each
// element of an array within a function. However, the contents in
// the array cannot be changed because of the const int keyword
// parameter within the function header. Further, this program WILL NOT!!!
// run. A compiler error will occur because the of use of the const keyword
// ...the const keyword makes the array readable only and cannot be changed.
//
// When compiled, this error will occur.
//
//  (
//      read-only variable is not assignable
//          nums[index] *= 2;
//          ~~~~~~~~~~~ ^
//  )
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: May 5th, 2017
//*********************************************************************
#include <iostream>
using namespace std;

// Functions prototypes
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Display the initial values.
    cout << "The array's values are:\n";
    showValues(set, ARRAY_SIZE);

    // Double the values in the array within function only.
    cout << "Changed array contents within doubleArray function:";
    doubleArray(set, ARRAY_SIZE);

    // Display the resulting values.
    cout << "After calling doubleArray, the values\n"
         << "stay the same as initialized in int main():\n";
    showValues(set, ARRAY_SIZE);

    // Display the resulting values.
    cout << "Calling doubleArray again:\n";
    doubleArray(set, ARRAY_SIZE);

    cout << "The array's values in int main remain the same:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

//***************************************************
// Definition of function doubleArray               *
// This function doubles the value of each element  *
// in the array passed into nums. The value passed  *
// into size is the number of elements in the array.*
//***************************************************

void doubleArray(const int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        nums[index] *= 2;
        cout << nums[index] << " ";
    }
}

//***************************************************
// Definition of function showValues.               *
// This function accepts an array of integers and   *
// the array's size as its arguments. The contents  *
// of the array displayed.                          *
//***************************************************

void showValues(const int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
