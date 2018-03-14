//***************************************************************
// This program demonstrates an array being passed to a function.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 28, 2016
//***************************************************************
#include <iostream>
using namespace std;

// Function prototype
void showValue(int [], int);

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValue(numbers, ARRAY_SIZE);
    return 0;
}

//***************************************************
// Definition of function showValue.                *
// This function accepts an array of integers and   *
// the array's size as its arguments. The contents  *
// of the array are displayed.                      *
//***************************************************

void showValue(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
