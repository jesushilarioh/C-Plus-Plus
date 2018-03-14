/********************************************************************
*
*	  40.
*           Convert the following while loop to a do-while loop:
*           int x = 1;
*           while (x > 0)
*           {
*               cout << "enter a number: ";
*               cin >> x;
*           }
*
* 	Jesus Hilario Hernandez
* 	March 10th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    int x = 1;

    // User controlled loop, posttest loop
    do
    {
        cout << "Enter a number: ";
        cin >> x;
    } while(x > 0);

    // Terminate program
    return 0;
}
