//***********************************************************
// This program reads data from a file.
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
    ifstream inputFile;
    string name;


    inputFile.open("Friends2.txt");
    cout << "Reading data from the file.\n";

    int count = 1;
    while (inputFile >> name)   // While there is data in Friends2.txt file
    {
        cout << count << ". "<<  name << endl;
        count++;
    }

    cout << "File closed." << endl;
    inputFile.close();
    return 0;
}
