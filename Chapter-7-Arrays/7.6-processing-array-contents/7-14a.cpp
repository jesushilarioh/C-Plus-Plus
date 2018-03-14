//***********************************************************
// This program compares the contents of two arrays. In
// order to do this you must compare the elements in
// each array...and not compare the array names. As this
// will result false; When comparing by the each
// array name, you are actually comparing memory addresses.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 27, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int firstArray[SIZE] = {5, 10, 15, 20, 25};
    int secondArray[SIZE] = {5, 10, 15, 20, 25};
    bool arraysEqual = 1; // Flag variable
    int count = 0;          // Loop counter variable

    // Determine whether the elements contain the same data.
    while (arraysEqual && count < SIZE)
    {
        if (firstArray[count] != secondArray[count])
        {
            arraysEqual = 0;
        }
        count++;
    }

    if (arraysEqual)
    {
        cout << "The arrays are equal.\n";
    }
    else{
        cout << "The arrays are not equal.\n";
    }
    return 0;
}
