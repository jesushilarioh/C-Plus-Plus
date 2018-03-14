/********************************************************************
*
*	37. Write an if statement that prints the message "The number is valid"
*       if the variable temperature is within the range -50 through 150.
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
    int temperature = -56;

    // Solution
    if (temperature >= -50 && temperature <= 150)
        cout << "\nThe number " << temperature << " is valid\n" << endl;

    // Terminate program false
    return 0;
}
