//***********************************************************
// This program uses a static local variable.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 22nd, 2016
//***********************************************************
#include <iostream>
using namespace std;

void showStatic();  // Function prototype

int main()
{
    // Call the showStatic function five times.
    for (int count = 0; count <= 5; count++)
    {
        showStatic();
    }
    return 0;
}

//***************************************************************
// Definition of function showStatic.                           *
// statNum is a static local variable. Its value is displayed   *
// and then incremented just before the function returns.       *
//***************************************************************

void showStatic()
{
    static int statNum;

    cout << "statNum is " << statNum << endl;
    statNum++;
}
