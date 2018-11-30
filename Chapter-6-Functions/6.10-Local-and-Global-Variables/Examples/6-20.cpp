/********************************************************************
*
*   6-20. This program demonstrates how a local variable can shadow
*         the name of a global constant.
*
* 	Jesus Hilario Hernandez
* 	November 29th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

// Global constant.
const int BIRDS = 500;

// Function prototype
void california();

int main()
{
    cout << "In main there are " << BIRDS
         << " birds.\n";

    california();

    cout << "In main there are " << BIRDS
         << " birds.\n";
         
    return 0;
}

/********************************************************
 * california function                                  *
 ********************************************************/
void california()
{
    const int BIRDS = 10000;
    cout << "In california there are " << BIRDS
         << " birds.\n";
}