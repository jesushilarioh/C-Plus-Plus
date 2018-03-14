/********************************************************************
*
*	Checkpoint 4.29
*
*       What will the following program display?
*
*       Answer: The program will display "That is serious."
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int funny = 7, serious = 15;

    funny = serious * 2;
    switch (funny)
    {
        case 0 : cout << "That is funny.\n";
                break;
        case 30: cout << "That is serious.\n"; // This will display
                break;
        case 32: cout << "That is seriously funny.\n";
                break;
        default: cout << funny << endl;
    }
    return 0;
}
