//************************************************************
// This program shows how the exit functions causes a program
// to stop executing.
//
// By: Jesus Hilario Hernandez
// Updated last: October 22nd, 2016
//************************************************************
#include <iostream>
#include <cstdlib>      // Needed for the exit function
using namespace std;

void funk();    // Function prototype

int main()
{
    funk();
    return 0;
}

//***********************************************************
// This function simply demonstrates that exit can be used  *
// to terminate a program from a function other than main.  *
//***********************************************************

void funk()
{
    cout << "This program terminates with the exit function.\n";
    cout << "Bye!\n";
    exit(EXIT_SUCCESS);
    cout << "This message will never be displayed\n";
    cout << "because the program has already terminated.\n";
}
