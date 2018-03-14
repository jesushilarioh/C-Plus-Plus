//***********************************************************
// This program writes data to a file
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;


int inputVal(int);          // Input validation (int)
double inputVal(double);    // Input validation (double)

int main()
{
    ofstream outputFile;    // File stream object
    int numberOfDays;       // Number of days of sales
    double sales;           // Sales amount for a days

    // Get the number of days.
    cout << "For how many days do you have sales? ";
    numberOfDays = inputVal(numberOfDays);

    // Open Sales.txt file
    outputFile.open("Sales.txt");

    // Get and write sales for each day
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Get the sales for a day.
        cout << "Enter the sales for day "
             << count << ": ";
        sales = inputVal(sales);

        // Write sales to file.
        outputFile << sales << endl;
    }

    // Close file!!
    outputFile.close();
    cout << "Data written to Sales.txt file.\n";
    return 0;
}

//*******************************************************
// The inputVal(int) function check for valid input.    *
// If the users types anything other than an integer,   *
// they will be promted to enter valid data type.       *
//*******************************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry, please type in a number: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//*******************************************************
// The inputVal(double) function check for valid input. *
// If the users types anything other than an double,    *
// they will be promted to enter valid data type.       *
//*******************************************************

double inputVal(double num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry, please type in a number: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
