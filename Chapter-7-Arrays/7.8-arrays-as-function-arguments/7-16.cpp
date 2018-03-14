//***********************************************************
// This program demonstrates that an array element is passed
// to a function like any other variable.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 27, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Function prototype
void showValue(int);
int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < SIZE; index++)
    {
        showValue(numbers[index]);
    }
    cout << '\n' << endl;
    return 0;
}

//***********************************************
// Definition of function showValue.            *
// This function accepts an integer argument.   *
// The value of the argument is displayed.      *
//***********************************************

void showValue(int num)
{
    cout << num << " ";
}
