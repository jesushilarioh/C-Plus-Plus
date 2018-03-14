//***********************************************************
// This program reads numbers from a file.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int value, sum;

    // Open inputFile
    inputFile.open("NumericData.txt");

    // Read number in NumericData.txt file
    cout << "Here are the numbers: " << endl;
    while (inputFile >> value)
    {
        cout << value << endl;
        sum += value;
    }
    cout << "Their sum is: " << sum <<endl;

    // Close inputFile!!
    inputFile.close();
    cout << "File closed." << endl;
    return 0;
}
