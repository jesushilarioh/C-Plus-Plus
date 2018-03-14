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

    // Open file
    inputFile.open("ListOfNumbers.txt");

    // Read the numbers from the file and display them.
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // Close file!
    inputFile.close();
    cout << "File closed." << endl;
    return 0;
}
