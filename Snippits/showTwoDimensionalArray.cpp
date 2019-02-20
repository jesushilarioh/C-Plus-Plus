/********************************************************************
 * Function Definition for showArray                                *
 * The first argument is a two-dimensional int array with COLS      *
 * columns. The second argument, rows, specifies the number of      *
 * rows in the array. The function displays the array's contents.   *
 ********************************************************************/
void showTwoDimensionalArray(const int numbers[][COLUMNS], int rows)
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