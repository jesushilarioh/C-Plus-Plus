/**
 * Problem:
 * 47. Look at the following array definition.
 * 
 * int numberArray[9][11];
 * 
 * Write a statement that assigns 145 to the 
 * first column of the 
 * first row of this array.
 * 
 * Write a statement that assigns 18 to the 
 * last column of the 
 * last row of this array.
 * 
 */
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int numberArray[9][11] = {0};

    numberArray[0][0] = 145; // 1. 
    numberArray[8][10] = 18; // 2.

    for (int row = 0; row < 9; row++)
    {
        for (int column = 0; column < 11; column++)
        {
            cout << numberArray[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
} 