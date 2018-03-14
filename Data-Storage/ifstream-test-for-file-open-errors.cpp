//*********************************************
// This program tests for file open errors.
//
// By: JESUS HILARIO HERNANDEZ
// Last modified: October 12, 2016
//*********************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open the file.
    inputFile.open("BadListOfNumbers.txt");

    // If the file sucessfully opened...
    if (inputFile)
    {
        // Read the numbers from the file and
        // display them.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close the file.
        inputFile.close();
    }
    // Trailing Else statment
    else
    {
        // Display and error message.
        cout << "Error opening the file.\n";
    }

//*********************************************
// Another example
//*********************************************

    inputFile.open("ListOfNumbers.txt");
    if (inputFile.fail())
    {
        cout << "Error opening file.\n";
    }
    else
    {
        // Read the numbers from the file and
        // display them.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close the file.
        inputFile.close();
    }
    return 0;
}
