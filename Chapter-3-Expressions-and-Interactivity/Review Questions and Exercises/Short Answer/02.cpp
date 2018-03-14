/********************************************************************
*
*	02. Assume a string object has been defined as follows:
*
*       - string description;
*
*       A) Write a cin statement that reads in a one-word string.
*       B) Write a statement that reads in a string that can contain
*          multiple words separated by blanks.
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string description;

    cout << endl << endl;
    cout << "What is you first name? ";
    getline(cin, description);
    cout << "You first name is " << description << endl;

    cout << "What is your full name? ";
    getline(cin, description);
    cout << "You full name is " << description << endl;
    cout << endl << endl;

    return 0;
}
