/********************************************************************
*
*	Checkpoint 4.26
*
*       What will the following program display?
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int UPPER = 8, LOWER = 2;
    int num1, num2, num3 = 12, num4 = 3;

    num1 = num3 < num4 ? UPPER : LOWER; // 2
    num2 = num4 > UPPER ? num3 : LOWER; // 2
    cout << num1 << " " << num2 << endl;
    // output:
    // 2 2
    // Terminate program
    return 0;
}
