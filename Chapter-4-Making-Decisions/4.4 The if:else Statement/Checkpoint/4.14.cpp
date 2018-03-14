/********************************************************************
*
*	Checkpoint 4.14
*
*       Write an if/else statement that assigns 0.10 to
*       commissionRate unless sales is greater than or
*       equal to 50000.00, in which case it assigns 0.20 to
*       commissionRate.
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
    float commissionRate = 0, sales = 78900;

    // The if statement
    if (sales >= 50000.00)
        commissionRate = 0.20;
    else
        commissionRate = 0.10;

    // Display
    cout << endl;
    cout << "sales = " << sales << endl;
    cout << "commissionRate = " << commissionRate << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
