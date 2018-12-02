/************************************************************
*
*   6-24. This program demonstrates default function
*         arguments.
*
* 	Jesus Hilario Hernandez
* 	November 30th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Function prototype with default arguments
void displayStars(int = 10, int = 1);

int main()
{
    displayStars();     // Use default values for cols and rows.
    cout << endl;
    displayStars(5);    // Use default value for rows.
    cout << endl;
    displayStars(7, 3); // Use 7 for cols and 3 for rows.

    return 0;
}

/********************************************************
 * Definition of function displayStars.                 *
 * The default argmumen for cols is 10 and for rows is  *
 * 1. This function displays a square made of           *
 * asterisks.                                           *
 ********************************************************/
void displayStars(int cols, int rows)
{
    // Nested loop. The outer loop controls the rows
    // and the inner loop controls the columns.
    for (int down = 0; down < rows; down++)
    {
        for (int across = 0; across < cols; across++)
            cout << "*";
        
        cout << endl;
    }
}