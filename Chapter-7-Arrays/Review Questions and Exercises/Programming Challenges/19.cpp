/************************************************************
 *
 *   19. 2D Array Operations
 * 
 *  Write a program that creates a two-dimensional array 
 *  initialized with test data. Use any data type you wish. 
 *  The program should have the following functions:
 * 
 *  • getTotal. This function should accept a two-dimensional 
 *      array as its argument and return the total of all the 
 *      values in the array.
 * 
 *  • getAverage. This function should accept a two-dimensional 
 *      array as its argument and return the average of all 
 *      the values in the array.
 * 
 *  • getRowTotal. This function should accept a two-dimensional 
 *      array as its first argument and an integer as its 
 *      second argument. The second argument should be the 
 *      subscript of a row in the array. The function should 
 *      return the total of the values in the specified row.
 * 
 *  • getColumnTotal. This function should accept a two-dimensional 
 *      array as its first argument and an integer as its 
 *      second argument. The second argument should be 
 *      the subscript of a column in the array. The 
 *      function should return the total of the values 
 *      in the specified column.
 * 
 *  • getHighestInRow. This function should accept a 
 *      two-dimensional array as its first argument and 
 *      an integer as its second argument. The second 
 *      argument should be the subscript of a row in the array. 
 *      The function should return the highest value in the 
 *      specified row of the array.
 * 
 *  • getLowestInRow. This function should accept a 
 *      two-dimensional array as its first argument and an 
 *      integer as its second argument. The second argument 
 *      should be the subscript of a row in the array. The 
 *      function should return the lowest value in the 
 *      specified row of the array.
 * 
 *  Demonstrate each of the functions in this program.
 *
 *************************************************************/
#include <iostream>
using namespace std;

const int ROWS = 3,
          COLUMNS = 5;

double getTotal(double[][COLUMNS]);
double getAverage(double[][COLUMNS]);
double getRowTotal(double[][COLUMNS], int);
double getColumnTotal(double[][COLUMNS], int);
double getHighestInRow(double[][COLUMNS], int);
double getLowestInRow(double[][COLUMNS], int);

int main()
{
    // 1. creates a two-dimensional array 
    // initialized with test data. Use any data type you wish.
    double test_data[ROWS][COLUMNS] = {{10, 1, 1, 1, 1},
                                       {7, 2, 20, 2, 9},
                                       {3, 3, 3, 3, 3}};

    int row = 1;
    cout << "Total = " << getTotal(test_data) << endl;
    cout << "Average = " << getAverage(test_data) << endl;
    cout << "Row #" << row << " total = " << getRowTotal(test_data, row) << endl; 
    cout << "Column #" << row << " total = " << getColumnTotal(test_data, row) << endl;
    cout << "Highest in Row #" << row << " = " << getHighestInRow(test_data, row) << endl;
    cout << "Lowest in Row #" << row << " = " << getLowestInRow(test_data, row) << endl;
    
    return 0;
}

double getTotal(double array[][COLUMNS])
{
    double total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
            total += array[row][column];
        
    }
    
    return total;
}

double getAverage(double array[][COLUMNS])
{
    double total_array_elements = 0,
           sum;

    for(int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
        {
            total_array_elements++;
            sum += array[row][column];
        }

    }
    return sum / total_array_elements;
}

double getRowTotal(double array[][COLUMNS], int ROW)
{
    double row_total = 0;
    // array[ROW][0]
    // array[ROW][1]
    // array[ROW][2]
    // array[ROW][3]
    // array[ROW][4]
    for(int column = 0; column < COLUMNS; column++)
        row_total += array[(ROW - 1)][column];
    
    return row_total;
}

double getColumnTotal(double array[][COLUMNS], int COLUMN)
{
    double column_total = 0;
    // array[0][COLUMN]
    // array[1][COLUMN]
    // array[2][COLUMN]
    // array[3][COLUMN]
    // array[4][COLUMN]
    for(int row = 0; row < ROWS; row++)
        column_total += array[row][(COLUMN - 1)];
        
    return column_total;
}

double getHighestInRow(double array[][COLUMNS], int ROW)
{
    // array[(ROW - 1)][0]
    // array[(ROW - 1)][1]
    // array[(ROW - 1)][2]
    // array[(ROW - 1)][3]
    // array[(ROW - 1)][4]
    double highest = array[(ROW - 1)][0];

    for(int column = 1; column < COLUMNS; column++)
    {
        if(array[(ROW - 1)][column] >= highest)
            highest = array[(ROW - 1)][column];

    }
        
    return highest;
}

double getLowestInRow(double array[][COLUMNS], int ROW)
{
    double lowest = array[(ROW - 1)][0];
    for(int column = 1; column < COLUMNS; column++)
    {
        if(array[(ROW - 1)][column] <= lowest)
            lowest = array[(ROW - 1)][column];
    }
    return lowest;
}
