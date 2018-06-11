/********************************************************************
*
*	14. PERSONAL INFORMATION
*       Write a program that displays the following pieces of
*       information, each on a separate line:
*
*       Your name
*       Your address, with city, state, and ZIP code
*       Your telephone number
*       Your college major
*
*       Use only a single cout statement to display all of this
*       information.
*
* 	Jesus Hilario Hernandez
* 	December 15th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string name = "Jesus Hilario Hernandez",
           address = "1234 29th Lane, Grand, Texas 73226",
           phone = "421-834-9879",
           major = "Computer Science";

    cout << endl;
    cout << "Name: "          << name << endl;
    cout << "Address: "       << address << endl;
    cout << "Telephone #: "   << phone << endl;
    cout << "College Major: " << major << endl;
    cout << endl;

    return 0;
}
