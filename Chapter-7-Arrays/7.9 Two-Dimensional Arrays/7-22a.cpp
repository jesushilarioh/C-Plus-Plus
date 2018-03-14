//***********************************************************
// This program sums all the elements of a two-dimensional
// array.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 11, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 5;     // Number of rows
    const int NUM_COLS = 5;     // Number of columns
    int total = 0;              // Accumulator
    int counter = 0;            // counter
    double average;
    int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
                                       {6, 1, 8, 9, 4},
                                       {4, 3, 7, 2, 9},
                                       {9, 9, 0, 3, 1},
                                       {6, 2, 7, 4, 2}};

    // Sum the array elements.
    for(int row = 0; row < NUM_ROWS; row++)
    {
        for(int col = 0; col < NUM_COLS; col++)
        {
            total += numbers[row][col];
            counter++;
        }
    }
    cout << "There are " << counter << " total numbers in numbers array. " << endl;
    // Dislay the sum
    cout << "The total is " << total << endl;
    average = total / counter;
    cout << "The average number within number array is " << average << endl;
    return 0;
}
