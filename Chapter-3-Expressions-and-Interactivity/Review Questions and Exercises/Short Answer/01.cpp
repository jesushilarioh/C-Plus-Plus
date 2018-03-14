/********************************************************************
*
*	01. Assume that the following variables are defined:
*
*       -   int age;
*       -   double pay;
*       -   char section;
*
*       Write a single cin statement that will read input into each
*       of these variables.
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int age;
    double pay;
    char section;

    cout << endl << endl;
    cout << "What is your age? ";
    cin >> age;

    cout << "How much do you make? ";
    cin >> pay;

    cout << "In what section are you parked? ";
    cin >> section;
    cout << endl << endl;

    return 0;
}
