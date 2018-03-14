//********************************************************************
//This program writes data to a file
//
//By: JESUS HILARIO HERNANDEZ
//Last Updated: October 12th, 2016
//********************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;    // File stream object
    int numberOfDays;       // Number of days of sales
    double sales;           // Sales amount for a day

    // Get the number of days.
    cout << "For how many days do you have sales? ";

    // Input Validation
    while (!(cin >> numberOfDays))
    {
        // Explain the error
        cout << "ERROR: you must enter a number: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }

    // Open a file named Sales.txt.
    outputFile.open("Sales.txt");

    // Get sales...write to file
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Get the sales for a day.
        cout << "Enter the sales for day "
             << count << ": ";
        // Input validation
        while(!(cin >> sales))
        {
            // Explain error
            cout << "ERROR: you must enter a number: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(1200, '\n');
        }

        // Write the sales to the file.
        outputFile << sales << endl;
    }

    // Close the file.
    outputFile.close();
    cout << "Data written to Sales.txt\n";

    return 0;
}
