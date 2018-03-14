/********************************************************************
*
*	  68. Find as many errors as you can.
          // This program averages a set of numbers.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // ERROR:
    /*
    int numCount, total;
    double average;
    cout << "How many numbers do you want to average? ";
    cin >> numCount;
    for (int count = 0; count < numCount; count++)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        count++;
    }
    average = total / numCount;
    cout << "The average is << average << endl;
    return 0;
    */

    // CORRECTION:
    int numCount,
        total = 0;  // Initialized (total) with 0.
    double average;
    cout << "How many numbers do you want to average? ";
    cin >> numCount;
    for (int count = 0; count < numCount; count++)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        // count++;     Removed this line
    }
    average = (static_cast<double>(total) / numCount);  // Static casted total
    cout << "The average is " << average << endl;   // Added (") character
    return 0;
}
