/********************************************************************
*
*	27. Write a pseudocode algorithm for a program that asks the user
*       enter a golfer's score for three games of golf, and then
*       displays the average of the three scores.
*
*       After you write the pseudocode algorithm, convert
*       it to a complete C++ program.
*
* 	Jesus Hilario Hernandez
* 	January 6th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Ask user for three scores.
    // Calculate the average of the three scores.
    // Display the average of the three scores.

    // Variables
    int x, y, z, average;

    // Ask user for three scores:
    cout << endl;
    cout << "Enter three scores for three golf games. " << endl;

    cout << "Enter Score 1: ";
    cin >> x;

    cout << "Enter Score 2: ";
    cin >> y;

    cout << "Enter Score 3: ";
    cin >> z;

    // Calculate average of three scores:
    average = (x + y + z) / 3;

    // Display average score:
    cout << "Your average score for three golf games is ";
    cout << average << endl;
    cout << endl;

    // Terminate Program.
    return 0;
}
