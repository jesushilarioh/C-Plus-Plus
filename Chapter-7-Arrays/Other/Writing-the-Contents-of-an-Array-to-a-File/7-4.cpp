//********************************************************
// This program writes the contents of an array to a file.
//
// By: Jesus Hilario Hernandez
// Last updated: October 25, 2016
//********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;  // Array size
    int numbers[ARRAY_SIZE];    // Array with 10 elements
    int count;                  // Loop counter variable
    ofstream outputFile;        // Output file stream object

    // Store values in the array.
    for (count = 0; count < ARRAY_SIZE; count ++)
    {
        numbers[count] = count;
    }

    // Open output file
    outputFile.open("SavedNumbers.txt");

    // Write the array contents to file.
    for (count = 0; count < ARRAY_SIZE; count++)
    {
        outputFile << numbers[count] << endl;
    }
    // Close file
    outputFile.close();

    // That's it!
    cout << "The numbers were saved to the file.\n" ;
    return 0;
}
