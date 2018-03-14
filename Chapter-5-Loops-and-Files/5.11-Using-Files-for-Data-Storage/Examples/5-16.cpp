//***********************************************************
// This program writes data to a single line in a file.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile2.txt");

    cout << "Now writing data to a file.\n";

    // Write four names to the file.
    outputFile << "Bach ";
    outputFile << "Beethoven ";
    outputFile << "Chopin ";
    outputFile << "Mozart ";
    outputFile << "Brahms ";

    // Close the file
    outputFile.close();
    cout << "Done.\n";
    return 0;
}
