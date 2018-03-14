/********************************************************************
*
*	Checkpoint 4.7
*
*       Write an if statement that multiplies payRate by 1.5 if hours
*       is greater that 40.
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
    float payRate = 18.25,
          hours = 45;

    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "Variables: " << endl;
    cout << "hours = " << hours << endl;
    cout << "payRate = " << payRate << endl;
    cout << "--------------------------------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "if hours is greater than 40\n";
    cout << "then multiply payRate by 1.5" << endl;
    cout << "payRate = ";

    // Solution
    if (hours > 40)
        payRate *= 1.5;

    // Display solution
    cout << payRate << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

    // Terminate Program False
    return 0;
}
