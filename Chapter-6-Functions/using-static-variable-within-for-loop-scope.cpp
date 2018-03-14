//***********************************************************
// This program uses a static local variable.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 22nd, 2016
//***********************************************************
#include <iostream>
using namespace std;

void showVar(); // Function prototype

int main()
{
    for (int count = 0; count < 10; count ++)
    {
        showVar();
    }
    return 0;
}

//***********************************
// Definition of function showVar   *
//***********************************

void showVar()
{
    static int var = 10;

    cout << var << endl;
    var++;
}
