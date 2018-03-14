/********************************************************************
*
*	36. Write an if statement that prints the message "The number is
*       valid" if the variable grade is within the range 0 through 100.
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
    int grade = 98;

    // Solution
    if (grade >= 0 && grade <= 100)
        cout << "\nThe number "<< grade <<" is valid\n" << endl;
        
    // Terminate program
    return 0;
}
