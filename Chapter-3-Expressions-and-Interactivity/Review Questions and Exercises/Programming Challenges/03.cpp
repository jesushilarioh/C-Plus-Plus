/********************************************************************
*
*	03. TEST AVERAGE
*
*       Write a program that asks for five test scores. The program
*       should calculate the average test score and display it.
*       The number displayed should be formatted in fixed-point
*       notation, with one decimal point of precision.
*
* 	Jesus Hilario Hernandez
* 	January 10th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables & Arrays
    const int NUM_OF_SCORES = 5;
    float testScores[NUM_OF_SCORES],
          average,
          total;

    // Ask user for 5 test scores
    cout << "\nThis program will calculate the average of 5 test scores.\n";
    cout << "\nPress enter to continue";
    cin.get();
    cout << endl;

    // Put test scores into an array
    for (int x = 0; x < NUM_OF_SCORES; x++)
    {
        cout << "Enter test score #" << (x + 1) << ": ";
        cin >> testScores[x];

        // Calculate total by adding test scores together
        total += testScores[x];
    }

    // Calculate average test score
    average = total / NUM_OF_SCORES;

    // Display average test score --> used fixed point with one decimal
    cout << setprecision(1) << fixed;
    cout << "\nThe averages test score is " << average << endl;
    cout << endl;

    //Terminate Program
    return 0;
}
