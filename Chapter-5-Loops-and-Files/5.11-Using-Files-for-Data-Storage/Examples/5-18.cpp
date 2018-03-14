//***********************************************************
// This program writes user input to a file
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;

    // Open an output file
    outputFile.open("Friends2.txt");

    // Get the names of three friends
    cout << "Enter the names of 10 friends.\n";
    for (int num = 0; num < 10; num++)
    {
        string name;
        cout << "Friend #" << (num + 1) << ": ";
        cin >> name;
        outputFile << name << endl;
    }
    cout << "The names were saved to a file.\n";
    outputFile.close();
    return 0;
}
