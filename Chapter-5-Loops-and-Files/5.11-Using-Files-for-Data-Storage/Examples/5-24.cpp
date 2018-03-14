//***********************************************************
// This program reads data from a file.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // Get filename from user.
    cout << "Enter the filename: ";
    cin >> filename;

    // Open file
    inputFile.open(filename);

    // If the file opens, process it.
    if (inputFile)
    {
        // Read number from file and display them
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close file!!
        inputFile.close();
        cout << "File closed." << endl;
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n"
             << "File does not exist or may have different filename.\n";
    }
    return 0;
}
