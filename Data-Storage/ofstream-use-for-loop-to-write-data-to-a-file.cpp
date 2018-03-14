//**************************************************
// This program uses a for loop to write the numbers
// in increments of 2 within the range of 0 through
// 1000.
//
// By: JESUS HILARIO HERNANDEZ
// Last modified: October 14, 2016
//**************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Stream object
    ofstream outputFile;

    // Open or create file to write to
    outputFile.open("writenumbersto.txt");

    for (int i = 0; i <= 1000; i += 2)
    {
        outputFile << i << endl;
    }
    // Display data write complete
    cout << "Your written file has been written and "
         << "complete." << endl;

    // Close file
    outputFile.close();
    return 0;
}
