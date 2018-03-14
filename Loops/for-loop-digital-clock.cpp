//********************************************************************
// This program simulates a digital clock. It displays
// the hours:minutes:seconds.
//
// JESUS HILARIO HERNANDEZ
// Last updated: October 8, 2016
//
//********************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count_hour = 0, count_minutes = 0, count_seconds = 0;
    cout << fixed << right; // Formatting output
    
    /*
     * The fill() member function of cout changes the fill character, which
     * is a space by default. In the program segment above, the fill function
     * causes a zero to be printed in front of all single digit numbers.
     */
    
    cout.fill('0');
    // Hour loop
    for (int hours = 0; hours < 24; hours ++)
    {
        count_hour++;// Hour counter
        // Minute loop
        for (int minutes = 0; minutes < 60; minutes++)
        {
            count_minutes++;// Minute counter
            // Second loop
            for (int seconds = 0; seconds < 60; seconds++)
            {
                count_seconds++;    // Second counter
                cout << setw(2) << hours << ":";
                cout << setw(2) << minutes << ":";
                cout << setw(2) << seconds << endl;
            }
        }
    }
    // Total number of iterations for hours loop
    cout << "The hours for loop iterates " << count_hour << " times." << endl;
    // Total number of iterations for minutes loopa
    cout << "The minutes for loop iterates " << count_minutes << " times."<< endl;
    // Total number of iterations for minutes loop
    cout << "The seconds for loop iterates " << count_seconds << " times." << endl;
    
    return 0;
}
