//********************************************************
// This program utilizes a function to write the contents
// of 4 separate arrays. Who have the same column length.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 11th, 2016
//********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Constants
const int COLS = 7;
const int ROWS_1 = 5;
const int ROWS_2 = 8;
const int ROWS_3 = 12;
const int ROWS_4 = 50;

// Function prototype
void showArray(int[][COLS], int);

int main()
{
    // Arrays
    int hours[ROWS_1][COLS];
    int stamps[ROWS_2][COLS];
    int autos[ROWS_3][COLS];
    int cats[ROWS_4][COLS];

    cout << "The contents in the hours table are: " << endl;
    showArray(hours, ROWS_1);
    cout << "The contents in the stamps table are: " << endl;
    showArray(stamps, ROWS_2);
    cout << "The contents in the autos table are: " << endl;
    showArray(autos, ROWS_3);
    cout << "The contents in the cats table are: " << endl;
    showArray(cats, ROWS_4);
    return 0;
}

void showArray(int arrays[][COLS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            arrays[x][y] = x;
            cout << setw(4) << arrays[x][y] << " ";
        }
        cout << endl;
    }
}
