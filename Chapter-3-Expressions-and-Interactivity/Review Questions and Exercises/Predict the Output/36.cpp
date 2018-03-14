/********************************************************************
*
*	36. What will the following program display? (Some should be
*       traced and require a calculator.)
*
*
*       (Assume the user enters George Washington.)
*
*
* 	Jesus Hilario Hernandez
* 	January 6th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string userInput;
    cout << endl;
    cout << "What is your name? ";
    getline(cin, userInput);
    cout << "Hello " << userInput << endl;
    cout << endl;


    return 0;
}
