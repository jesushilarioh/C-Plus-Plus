//********************************************************************
// This program reads data from a file
// Also used for detecting the end of a file
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 12th, 2016
//********************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open the file
    inputFile.open("ListOfNumbers.txt");

    // Read numbers
    // Display them
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // CLose file
    inputFile.close();
    return 0;
}
