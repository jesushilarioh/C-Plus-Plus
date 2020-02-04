/**
 * Problem:
 * 49. An application uses a two-dimensional 
 * array defined as follows.
 * 
 * int days[29][5];
 * 
 * 1. Write code that sums each row in the array 
 * and displays the results. 
 * 
 * 2. Write code that sums each column in the 
 * array and displays the results.
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 29, 
              COLUMNS = 5;

    int days[ROWS][COLUMNS] = {{2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}, 
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2},
                               {2, 2, 2, 2, 2}};
    double total;

    // 1.
    for (int row = 0; row < ROWS; row++)
    {
        total = 0;

        cout << setprecision(1) <<fixed;
        cout.fill('0');
        for (int col = 0; col < COLUMNS; col++)
        {
            total += days[row][col];
        }
        cout << "Sum of row #"
             << setw(2) << (row + 1)
             << " = " 
             << total 
             << endl;
    }

    cout << endl;

    // 2.
    for (int col = 0; col < COLUMNS; col++)
    {
        total = 0;

        for (int row = 0; row < ROWS; row++)
        {
            total += days[row][col];
        }
        cout << "Sum of col #"
             << setw(2) << (col + 1)
             << " = "
             << total
             << endl;
        
    }
    
    

    return 0;
}