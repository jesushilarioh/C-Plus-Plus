//********************************************
// This Program reads data from a file.
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
    ifstream inputFile;
    string firstname, lastname;

    inputFile.open("friends.txt");
    cout << "Reading data from the file." << endl;

    inputFile >> firstname >> lastname;      // Read name 1 from the file
    cout << firstname << " " << lastname << endl;   // Display name 1

    inputFile >> firstname >> lastname;      // Read name 2 from the file
    cout << firstname << " " <<  lastname << endl;   // Display name 2

    inputFile >> firstname >> lastname;      // Read name 3 from the file
    cout << firstname << " " << lastname << endl;   // Display name 3

    inputFile.close();      // Close the file
    return 0;
}
