/**
 * 44. Define a two-dimensional array of integers named grades. 
 *      It should have 30 rows and 10 columns.
 */
#include <iostream>
using namespace std;
int main()
{
    const int ROWS = 30, 
              COLUMNS = 10;

    int grades [ROWS][COLUMNS] = {0};

    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            cout << grades[row][column] << " "; 
        }
        cout << endl;
    }
    
    return 0;
} 