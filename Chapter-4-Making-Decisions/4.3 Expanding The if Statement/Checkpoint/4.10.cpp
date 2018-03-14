/********************************************************************
*
*	Checkpoint 4.10
*
*       Write an if statement that performs the following logic: if the
*       variable sales is greater then 50,000, then assign 0.25 to the
*       commissionRate variable, and assign 250 to the bonus variable.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    double sales = 340000,
           commissionRate,
           bonus;

    // The if statement
    if (sales > 50000)
    {
        commissionRate = 0.25;
        bonus = 250;
    }

    // Disply
    cout << endl;
    cout << "sales          = $" << setw(8) << sales << endl;
    cout << "commissionRate = $" << setw(8) << commissionRate << endl;
    cout << "bonus          = $" << setw(8) << bonus << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
