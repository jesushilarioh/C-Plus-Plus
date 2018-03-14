/********************************************************************
*
*	Checkpoint 4.15
*
*       If you executed the following code, what should it display if
*       the user enters 5? What if the user enters 15? What if the
*       user enters 15? What if the user enters 30? What if the user
*       enters -1?
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Zero\n";

        if (number > 10)
        {
            cout << "Ten\n";

            if (number > 20)
            {
                cout << "Twenty\n";
            }
        }
    }

    // When user enter 5
    // Output:
    // Zero

    // When user enter 15
    // Output:
    // Zero
    // Ten

    // When user enter 30
    // Output:
    // Zero
    // Ten
    // Twenty

    // When user enter -1
    // Output:
    //

    // Terminate program
    return 0;
}
