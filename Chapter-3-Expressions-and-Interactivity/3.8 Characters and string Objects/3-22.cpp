//************************************************
// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().
//
// By: Jesus Hilario Hernandez
// Last Updated: December 10, 2016
//************************************************
#include <iostream>
using namespace std;

int main()
{
    char ch;                // Define a character variable
    int numbers;            // Define an integer variable

    cout << "Enter a number: ";
    cin >> numbers;              // Read an integer
    cout << "Enter a character: ";
    ch = cin.get();             // Read a character
    cout << "Thank You!\n";
    return 0;
}
