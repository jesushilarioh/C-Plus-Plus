//***********************************************************
// This program writes user input to a file.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: November 1, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int inputVal(int);

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // Open output file.
    outputFile.open("Numbers.txt");

    // Get three numbers from the user.
    cout << "Enter a number: ";
    number1 = inputVal(number1);
    cout << "Enter another number: ";
    number2 = inputVal(number2);
    cout << "Enter the last number: ";
    number3 = inputVal(number3);

    // Write the numbers to the file.
    outputFile << number1 << endl
               << number2 << endl
               << number3 << endl;
    cout << "The numbers were saved to a file.\n";

    // Close the file
    outputFile.close();
    cout << "Done\n";
    return 0;
}

//***************************************************
// The inputVal function checks for valid input.    *
// In this case an int. If the user chooses anything*
// other than an int, they will be prompted to      *
// chose valid input.                               *
//***************************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered\n"
             << "Try again: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
