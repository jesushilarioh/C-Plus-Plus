/********************************************************************
*
*	  42.
*           Convert the following while loop to a for loop:
*
*           int count = 0;
*
*           while (count < 50)
*           {
*               cout << "count is " << count << endl;
*               count++;
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
    // For loop, pretest loop, count controlled loop
    for (int count = 0; count < 50; count++)
        cout << "(count) is " << count << endl;

    // Terminate program
    return 0;
}
