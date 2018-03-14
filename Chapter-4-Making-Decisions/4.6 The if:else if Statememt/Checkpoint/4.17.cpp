/********************************************************************
*
*	Checkpoint 4.17
*
*       The following code is used in a bookstore program to
*       determine how many discount coupons a customer gets.
*       Complete the table that appears after the program.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int numBooks, numCoupons;

    // Display
    cout << "How many books are being purchased? ";
    cin >> numBooks;

    // if statement
    if (numBooks < 1)
        numCoupons = 0;
    else if (numBooks < 3)
        numCoupons = 1;
    else if (numBooks < 5)
        numCoupons = 2;
    else
        numCoupons = 3;

    // Display
    cout << "The number of coupons to give is "
         << numCoupons << endl;

     // When user enter 1
     // Output:
     // The number of coupons to give us 1

     // When user enter 3
     // Output:
     // The number of coupons to give us 2

     // When user enter 4
     // Output:
     // The number of coupons to give us 2

     // When user enter 5
     // Output:
     // The number of coupons to give is 3

     // When user enter 10
     // Output:
     // The number of coupons to give is 3

    // Terminate Program
    return 0;
}
