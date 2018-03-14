/********************************************************************
*
*	Checkpoint 4.28
*
*       What is wrong with the following switch statement?
*
*       Answer: Each case statement contains a relational expression/
*               boolean expression. Refer to 4.27.png in file to see
*               compiler error.
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
    int temp = 90;

    // Switch statement
    switch (temp)
    {
        case temp < 0 : cout << "Temp is negative.\n";
                        break;
        case temp == 0: cout << "Temp is zero.\n";
                        break;
        case temp > 0 : cout << "Temp is positive.\n";
                        break;
    }

    // Terminate program
    return 0;
}
