/********************************************************************
*
*	  37.
*           Write a for loop that displays the following set of
*           numbers: 0, 10, 20, 30, 40, 50 . . . 1000
*
* 	Jesus Hilario Hernandez
* 	March 10th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout << endl;

    // Pretest loop, count-controlled loop,
    for (int i = 0; i <= 1000; i += 10)
    {
        cout << i;
        if (i != 1000)
        {
            cout << ", ";

            if (i % 120 == 0 && i != 0)
                cout << endl;
        }
    }

    cout << '\n' << endl;

    // Terminate program
    return 0;
}
