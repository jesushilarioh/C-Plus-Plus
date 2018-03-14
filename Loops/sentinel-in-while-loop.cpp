// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed

// JESUS HILARIO HERNANDEZ

#include <iostream>
using namespace std;

int main()
{
    // Fill in the code to define and initialize to 1 the variable month
    float total = 0, rain;
    int month = 1;

    cout << "Enter the total rainfall for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    // Fill in the code to read in the value for rain
    cin >> rain;

    // Fill in the code to start a while loop that iterates
    // while rain does not equal -1
    while(rain != -1)
    {
        // Fill in the code to update total by adding it to rain
        total += rain;
        // Fill in the code to increment month by one
        month++;

        cout << "Enter the total rainfall in inches for month "
        << month << endl;
        cout << "Enter -1 when you are finished" << endl;
        // Fill in the code to read in the value for rain
        cin >> rain;
    }

    if (month == 1)
        cout << "No data has been entered" << endl;

    else
        cout << "The total rainfall for the " << month-1
        << " months is "<< total << " inches." << endl;


    return 0;
}
