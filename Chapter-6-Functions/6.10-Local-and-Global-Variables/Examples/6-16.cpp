/********************************************************************
*
*   6-16. This program shows that variables defined in a function
*         are hidden from other functions.
*
* 	Jesus Hilario Hernandez
* 	November 28th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

// Function prototype
void anotherFunction();

int main()
{
    int num = 1;    // Local Variable

    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;

    return 0;
}

/********************************************************
 * Definition of anotherFunction                        *
 * It has a local variable, num, whose initial value    *
 * is displayed.                                        *
 ********************************************************/

void anotherFunction()
{
    int num = 20;   // Local Variable

    cout << "In anotherFunction, num is " << num << endl;
}