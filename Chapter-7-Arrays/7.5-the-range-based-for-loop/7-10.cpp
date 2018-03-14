//**********************************************************
// This program deomonstrates the range-based for loop.
//
// By: Jesus Hilario Hernandez
// Last updated: October 26, 2016
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
    // Define an array of integers.
    int numbers[] = {10, 20, 30, 40, 50};

    // Display the values in the array.
    for (int val : numbers)
    {
        cout << val << endl;
    }
    return 0;
}
