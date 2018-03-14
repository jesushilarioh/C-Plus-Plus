//********************************************
// This Program writes user input to a file
//
// By: Jesus Hilario HERNANDEZ
// Last updated: October 11th, 2016
//********************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // Open an output file.
    outputFile.open("numbers.txt");

    // Get three numbers from the user.
    cout << "Enter a number: ";
    while (!(cin >> number1))
    {
        // Explain error
        cout << "ERROR: a number must be pressed. " << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }

    cout << "Enter another number: ";
    while (!(cin >> number2))
    {
        // Explain Error
        cout << "ERROR: a number must be entered. " << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }

    cout << "Enter a last number: ";
    while (!(cin >> number3))
    {
        // Explain the error
        cout << "ERROR: you must enter a number. " << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input.
        cin.ignore(1200, '\n');
    }

    // Write the numbers to the file.
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "The numbers were saved to a file.\n";

    // Close the file
    outputFile.close();
    cout << "Done.\n" << endl;
    return 0;
}
