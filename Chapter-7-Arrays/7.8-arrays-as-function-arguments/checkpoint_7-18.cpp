//*************************************************************************
// The following program will ask the user to enter 10 integers, which
// are stored in an array. The function avgArray is to calculate and return
// the average of the numbers entered
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: May 5th, 2017
//*************************************************************************
#include <iostream>
using namespace std;

// Function Prototypes
double avgArray(double [], int);
double inputVal(double);

int main()
{
    const int SIZE = 10;
    double userNums[SIZE];

    cout << "Enter 10 numbers: " << endl;
    for (int count = 0; count < SIZE; count++)
    {
        cout << '#' << (count + 1) << ' ';
        userNums[count] = inputVal(userNums[count]);
    }
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl;
    return 0;
}

//*******************************************************
// This function averages all the numbers in an array.  *
//*******************************************************
double avgArray(double arr[], int size)
{
    double total = 0;   // Initialie accumulator
    double average;     // Will hold the average
    for (int count = 0; count < size; count++)
    {
        total += arr[count];
    }
    average = total / size;
    return average;
}

//***********************************************************
// The inputVal function checks for valid user input when   *
// checking doubles.                                        *
//***********************************************************
double inputVal(double num)
{
    while(!(cin >> num))
    {
        // Explain Error
        cout << " Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
