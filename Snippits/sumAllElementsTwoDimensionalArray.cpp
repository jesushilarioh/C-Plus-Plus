/********************************************************
 * To sum all the elements of a two-dimensional array,  *
 * you can use a pair of nested loops to add the        *
 * contents of each element to an accumulator.          *
 * The following code is an example.                    *
 ********************************************************/
#include <iostream>
using namespace std;
int main()
{
    const int NUMBER_OF_ROWS    = 5,
              NUMBER_OF_COLUMNS = 5;
    
    int total = 0,
        numbers[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS] = {{2, 7, 9, 6, 4},
                                                      {6, 1, 8, 9, 4},
                                                      {4, 3, 7, 2, 9},
                                                      {9, 9, 0, 3, 1},
                                                      {6, 2, 7, 4, 1}};

    for (int row = 0; row < NUMBER_OF_ROWS; row++)
    {
        for (int column = 0; column < NUMBER_OF_COLUMNS; column++)
            total += numbers[row][column];
    }

    cout << "The total is " << total << endl;   // The total is 123

    return 0;
}