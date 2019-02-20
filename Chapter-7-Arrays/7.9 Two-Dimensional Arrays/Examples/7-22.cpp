// This program demonstrates accepting a 2D array argument.
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const int COLUMNS       = 4,
          TABLE_1_ROWS  = 3,
          TABLE_2_ROWS  = 4;

void showArray(const int [][COLUMNS], int);

int main()
{
    int table_1[TABLE_1_ROWS][COLUMNS] = {{1, 2, 3, 4},
                                          {5, 6, 7, 8},
                                          {9, 10, 11, 12}},

        table_2[TABLE_2_ROWS][COLUMNS] = {{10, 20, 30, 40},
                                          {50, 60, 70, 80},
                                          {90, 100, 110, 120},
                                          {130, 140, 150, 160}};

        cout << "The contents of table_1 are:\n";
        showArray(table_1, TABLE_1_ROWS);

        cout << "The contents of table_2 are:\n";
        showArray(table_2, TABLE_2_ROWS);
                                        
    return 0;
}

/********************************************************************
 * Function Definition for showArray                                *
 * The first argument is a two-dimensional int array with COLS      *
 * columns. The second argument, rows, specifies the number of      *
 * rows in the array. The function displays the array's contents.   *
 ********************************************************************/
void showArray(const int numbers[][COLUMNS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLUMNS; y++)
        {
            cout << setw(4) << numbers[x][y] << " ";
        }
        cout << endl;
    }
}