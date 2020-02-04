#include <iostream>
using namespace std;
/*
 *  (89.)
 *  Errors include:
 * 1). When a two-dimensional array is passed to a function, 
 * the parameter type must contain a size declarator 
 * for the number of columns
 * 
 */ 
// ORIGINAL
// void showValues(int nums[4][]) 
// {
//     for (rows = 0; rows < 4; rows++) 
//         for (cols = 0; cols < 5; cols++)
//             cout << nums[rows][cols];
// }

// CORRECTION
const int COLUMNS = 5;
const int ROWS    = 4;

void showValues(int nums[][COLUMNS], const int ROW_SIZE)
{
    for (int row = 0; row < ROW_SIZE; row++)
        for (int col = 0; col < COLUMNS; col++)
            cout << nums[row][col];
}

int main()
{
    // Tests /start
    int array[ROWS][COLUMNS] = {{1, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0}};
    showValues(array, ROWS);
    cout << endl;

    // Tests / end
    return 0;
}