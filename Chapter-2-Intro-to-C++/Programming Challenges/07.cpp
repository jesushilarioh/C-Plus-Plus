/********************************************************************
*
*	07. OCEAN LEVELS
*       Assuming the ocean's level is currently rising at about 1.5
*       millimeters per year, write a program the displays:
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 5 years
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 7 years
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 10 years
*
* 	Jesus Hilario Hernandez
* 	December 19th 2017
*
*
********************************************************************/
#include <iostream>

using namespace std;

int main()
{
    const double MIL_PER_YEAR = 1.5;
    
    cout << endl;
    cout << "The ocean's level will grow " << MIL_PER_YEAR * 5;
    cout << " millimeters after 5 years." << endl;
    cout << "The ocean's level will grow " << MIL_PER_YEAR * 7;
    cout << " millimeters after 7 years." << endl;
    cout << "The ocean's level will grow " << MIL_PER_YEAR * 10;
    cout << " millimeters after 10 years." << endl;
    cout << endl;

    return 0;
}
