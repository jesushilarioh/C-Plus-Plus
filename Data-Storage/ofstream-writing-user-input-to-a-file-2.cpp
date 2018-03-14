//********************************************
// This Program writes user input to a file.
//
// By: Jesus Hilario HERNANDEZ
// Last updated: October 11th, 2016
//********************************************
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string name1, name2, name3;

    // Open an output file.
    outputFile.open("friends.txt");

    // Get the names of three friedns.
    cout << "Enter the names of three friends." << endl;
    cout << "Friend #1: ";
    getline(cin, name1);
    cout << "Friend #2: ";
    getline(cin, name2);
    cout << "Friend #3: ";
    getline(cin, name3);

    // Write the names to the file.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "The names were saved to a file." << endl;

    // Close the file
    outputFile.close();

    return 0;
}
