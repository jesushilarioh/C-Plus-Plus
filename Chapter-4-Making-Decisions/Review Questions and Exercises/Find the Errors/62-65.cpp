/********************************************************************
*
*	62. The following program has errors. Find as many as you can.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x,
        z,
        a = 12,
        count;

    // Formatting
    cout << endl;

    // 62. The following statement should determine if x is not greater
    //     than 20. What is wrong with it?
    //     if (!x > 20)
    // Solution
    if (x = 12, !(x > 20))
        cout << x << " is not greater that 20\n" << endl;

    // 63. The following statement should determine if count is within the
    //     range of 0 through 100. What is wrong with it?
    //     if (count >= 0 || count <= 100)
    if (count = 89, count >= 0 && count <= 100)
        cout << count << " is within range.\n" << endl;

    // 64. The following statement should determine if count
    //     is outside the range of 0 through 100. What is wrong with it?
    //     if (count < 0 && count > 100)
    if (count = 120, count < 0 || count > 100)
        cout << count << " is out of range.\n" << endl;

    // 65. The following statement should assign 0 to z if a is
    //     less than 10, otherwise it should assign 7 to z.
    //     What is wrong with it?
    //     z = (a < 10) : 0 ? 7;
    z = a < 10 ? 0 : 7;
    cout << "z = " << z << endl; // z = 7

    // Formatting
    cout << endl;

    // Terminate program.
    return 0;
}
