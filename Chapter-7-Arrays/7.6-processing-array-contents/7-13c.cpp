//***********************************************************
// This program get and prints the average of the values in
// a numeric array.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 27, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int inputVal(int);          // Error checking for int
double inputVal(double);    // Error checking for double

int main()
{
    const int NUM_SCORES = 10;
    double scores[NUM_SCORES];
    double total = 0;           // Initialize accumulator
    double average;             // Will hold the average
    // Using regular for loop
    for (int count = 0; count < NUM_SCORES; count++)
    {
        cout << "Enter test score number "
             << (count + 1) << ": ";
        scores[count] = inputVal(scores[count]);
        total += scores[count];
    }
    average = total / NUM_SCORES;

    cout << fixed << showpoint << setprecision(1);
    cout << "\nYour average test score is :" << average << endl << endl;

    total = 0;                  // Reset accumulator
    int rangeCount = 1;         // Secondary counter
    // Using a range-based for loop
    for (int val : scores)
    {
        cout << "Enter test score number "
             << rangeCount << ": ";
        val = inputVal(val);
        total += val;
        rangeCount++;
    }
    average = total / NUM_SCORES;

    cout << "\nYour average test score is :" << average << endl << endl;
    return 0;
}
//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using doubles.             *
//*********************************************************
double inputVal(double num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
