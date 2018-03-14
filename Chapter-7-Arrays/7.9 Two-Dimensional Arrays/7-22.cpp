//********************************************************
// This program demonstrates a two-dimensional array.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 11, 2016
//********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const int COLS = 4;         // Numbers of columns in each array
const int TBL1_ROWS = 3;    // Number of rows in table1
const int TBL2_ROWS = 4;    // Number of rows in table2
const int TBL3_ROWS = 5;    // Number of rows in table3

void showArray(const int [][COLS], int);    // Function prototype

int main()
{
    int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 10, 11, 12}};
    int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                   {50, 60, 70, 80},
                                   {90, 100, 110, 120},
                                   {130, 140, 150, 160}};
    int table3[TBL3_ROWS][COLS] =  {{9, 19, 29, 39},
                                   {49, 59, 69, 79},
                                   {89, 99, 109, 119},
                                   {129, 139, 149, 159},
                                   {169, 179, 189, 199}};

    cout << "The contents of table1 are:\n";
    showArray(table1, TBL1_ROWS);
    cout << "The contents of table2 are:\n";
    showArray(table2, TBL2_ROWS);
    cout << "The contents of table3 are:\n";
    showArray(table3, TBL3_ROWS);
    return 0;
}

//*******************************************************************
// Function Definition for showArray                                *
// The first argument is a two-dimensional int array with COLS      *
// columns. The second argumnet, rows, specifies the number of      *
// rows in the array. The function displays the array's contents    *
//*******************************************************************

void showArray(const int numbers[][COLS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            cout << setw(4) << numbers[x][y] << " ";
        }
        cout << endl;
    }
}
