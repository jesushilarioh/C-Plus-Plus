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
#include <iomanip>

using namespace std;

int main()
{
    float numOfAcres = 391876;

    cout << setprecision(3) << fixed << endl;
    cout << "---------------" << endl;
    cout << "One acre of land is equivalent to 43,560 sqft." << endl;
    cout << "---------------" << endl << endl;
    cout << "There are approximately " << numOfAcres / 43560;
    cout <<  " acres in a" << endl;
    cout << "tract of land that has 391,876 square feet." << endl;
    cout << endl;

    return 0;
}
