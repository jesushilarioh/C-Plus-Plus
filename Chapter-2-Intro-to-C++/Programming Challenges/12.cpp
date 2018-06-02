/********************************************************************
*
*	12. LAND CALCULATION
*       One acre of land is equivalent to 43,560 square feet. Write
*       a program that calculates the number of acres in a tract of
*       land with 391,876 square feet.
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
    const int ONE_ACRE_OF_LAND = 43560;
    int num_of_acres = 391876,
        total_acreage = num_of_acres / ONE_ACRE_OF_LAND;

    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "One acre of land is equivalent to 43,560 sqft." << endl;
    cout << "----------------------------------------------" << endl;
    cout << "There are approximately " << total_acreage << " acres ";
    cout << "in a\ntract of land that has 391,876 square feet.\n";
    cout << endl;

    return 0;
}
