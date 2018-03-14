/********************************************************************
*
*	  41.
*           Convert the following do-while loop to a while loop:
*
*           char sure;
*           do
*           {
*               cout << "Are you sure you want to quit? ";
*               cin >> sure;
*           } while (sure != 'Y' && sure != 'N');
*
* 	Jesus Hilario Hernandez
* 	March 10th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    char sure;

    // While loop, Pretest loop, conditional loop
    while (sure != 'Y' && sure != 'N')
    {
        cout << "Are you sure you want to quit?";
        cin >> sure;
    }

    // Terminate program
    return 0;
}
