//***********************************************************
// This program reads data from a file.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open File
    inputFile.open("NonExistentFile.txt");

    // If the file opend, process it.
    if (inputFile)
    {
        // Read data from file and display
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close File!!
        inputFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n"
             << "File does not exist or may be in a different location.\n";
    }
    return 0;
}
