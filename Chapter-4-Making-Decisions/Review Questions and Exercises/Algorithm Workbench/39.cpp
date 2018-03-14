/********************************************************************
*
*	39. Assume str1 and str2 are string objects that have been
*       initialized with different values. Write an if/else
*       statement that compares the two objects and displays
*       the one that is alphabetically greatest.
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
    string str1 = "James", str2 = "Turnner";

    // Solution
    if (str1 > str2)
    {
        // Display
        cout << "\nstr1 [" << str1 << "] ";
        cout << "is greater than str2 [" << str2 << "]\n";
    }
    else
    {
        // Display
        cout << "\nstr2 [" << str2 << "] ";
        cout << "is greater than str1 [" << str1 << "]\n";
    }

    // Formatting
    cout << endl;
    
    // Terminate program false
    return 0;
}
