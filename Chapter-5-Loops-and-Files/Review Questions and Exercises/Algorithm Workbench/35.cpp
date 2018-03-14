/********************************************************************
*
*	  35.
*         Write a while loop that lets the user enter a number.
*         The number should be multiplied by 10, and the result
*         stored in the variable product. The loop should
*         iterate as long as product contains a value less than 100.
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
    int num,            // User number
        product = 0;    // Accumulator

    // While running total is less than 100.
    while (product < 100)
    {
        // Ask for number
        cout << "Enter a number: ";
        cin >> num;
        product += num;
    }

    // Check running total (product)
    cout << "product = " << product << endl << endl;
    
    // Terminate program
    return 0;
}
