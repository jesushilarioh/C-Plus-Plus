/************************************************************
 *
 *   08. Lo Shu Magic Square
 * 
 * The Lo Shu Magic Square is a grid with 3 rows and 3 
 * columns shown in Figure 7-19. The Lo Shu Magic Square 
 * has the following properties:
 * 
 *  • The grid contains the numbers 1 through 9 exactly.
 *  • The sum of each row, each column, and each diagonal 
 *      all add up to the same number. This is shown in 
 *      Figure 7-20.
 * 
 * In a program you can simulate a magic square using a 
 * two-dimensional array. Write a function that accepts a 
 * two-dimensional array as an argument, and determines 
 * whether the array is a Lo Shu Magic Square. 
 * Test the function in a program.
 *
 *************************************************************/
#include <iostream>
using namespace std;

const int GRID_SIZE = 3;

bool isLoShuMagicSquare(double[][GRID_SIZE]);
double sumOfEachRow(double[][GRID_SIZE]);
double sumOfEachColumn(double[][GRID_SIZE]);
double sumOfDiagonalLeftToRight(double[][GRID_SIZE]);
double sumOfDiagonalRightToLeft(double[][GRID_SIZE]);

int main()
{
    double grid_array_1[GRID_SIZE][GRID_SIZE] = {{1, 2, 3},
                                                 {4, 5, 6},
                                                 {7, 8, 9}},

           grid_array_2[GRID_SIZE][GRID_SIZE] = {{4, 9, 2},
                                                 {3, 5, 7},
                                                 {8, 1, 6}};

    cout << "Array is";
    cout << (isLoShuMagicSquare(grid_array_1) ? " " : " NOT ");
    cout << "a Lo Shu Magic Square!" 
         << endl;

    return 0;
}

double sumOfEachRow(double array[][GRID_SIZE])
{
    double total;
    for(int row = 0; row < GRID_SIZE; row++)
    {
        total = 0;
        for(int columns = 0; columns < GRID_SIZE; columns++)
            total += array[row][columns];

        // cout << "total for row " << (row + 1) << " = " << total << endl;
    }
    return total;
}

double sumOfEachColumn(double array[][GRID_SIZE])
{
    double total;
    for(int columns = 0; columns < GRID_SIZE; columns++)
    {
        total = 0;
        for (int row = 0; row < GRID_SIZE; row++)
            total += array[row][columns];

        // cout << "total for columns " << (columns + 1) << " = " << total << endl;
    }
    return total;
}

double sumOfDiagonalLeftToRight(double array[][GRID_SIZE])
{
    double total = 0;

    for(int i = 0; i < GRID_SIZE; i++)
        total += array[i][i];
    
    // cout << "diaganal top to bottom = " << total << endl;

    return total;
}

double sumOfDiagonalRightToLeft(double array[][GRID_SIZE])
{
    double total = 0;

    // for (int row = 0, column = (GRID_SIZE - 1); row < GRID_SIZE; row++, column--)
    //     total += array[row][column];
    // OR
    
    int column = (GRID_SIZE - 1);
    for (int row = 0; row < GRID_SIZE; row++)
    {
        total += array[row][column];
        column--;
    }

    // cout << "diaganal bottom to top = " << total << endl;

    return total;
}
bool isLoShuMagicSquare(double array[][GRID_SIZE])
{
    if(
        sumOfEachRow(array)              == 15 &&
        sumOfEachColumn(array)           == 15 &&
        sumOfDiagonalLeftToRight(array)  == 15 &&
        sumOfDiagonalRightToLeft(array)  == 15
       )
        return true;
    else
        return false;
}