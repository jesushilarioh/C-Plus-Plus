//************************************************************
// This program has three functions: main, first, and second.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 1, 2016
//************************************************************
#include <iostream>
using namespace std;

//***************************************
// Defintion of functions first         *
// This function displays a message     *
//***************************************

void first()
{
    cout << "I am now inside the function first.\n";
}

//***************************************
// Definition of function second        *
// This function displays a message.    *
//***************************************

void second()
{
    cout << "I am now inside the function second.\n";
}

//***************************************
// Function main                        *
//***************************************

int main()
{
    cout << "I am starting in function main.\n";
    first();    // Call function first
    second();   // Call function second
    cout << "Back in function main again. \n";
    return 0;
}
