/********************************************************************
*
*	Checkpoint 4.25
*
*       The following statements use conditional expressons. Rewrite
*       Rewrite each with an if/else statement.
*
*       A). j = k > 90 ? 57 : 12;
*       B). factor = x >= 10 ? y * 22 : y * 35;
*       C). total += count == 1 ? sales : count * sales;
*       D). cout << (((num % 2) == 0) ? "Even\n" : "Odd\n");
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
    int j = 9,
        k = 90,
        x = 78,
        y = 2,
        factor = 1,
        total = 4,
        count = 0,
        sales = 5,
        num = 2;


    // A). j = k > 90 ? 57 : 12;
    if (k > 90)
        j = 57;
    else
        j = 12;


    // B). factor = x >= 10 ? y * 22 : y * 35;
    if (x >= 10)
        factor = y * 22;
    else
        factor = y * 35;


    // C). total += count == 1 ? sales : count * sales;
    if (count == 1)
        total += sales;
    else
        total += count * sales;


    // D). cout << (((num % 2) == 0) ? "Even\n" : "Odd\n");
    if ((num % 2) == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";

    // Output:
    // Even
    // Terminate Program
    return 0;
}
