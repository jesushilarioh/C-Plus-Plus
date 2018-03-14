//************************************************************
// This program has variables of several of the integer types.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//************************************************************
#include <iostream>
using namespace std;

int main()
{
    int checking;
    unsigned int miles;
    long days;

    checking = -20;
    miles = 4276;
    days = 189000;
    cout << "We have made a long journey of " << miles;
    cout << " miles.\n";
    cout << "Our checking occount balance is " << checking;
    cout << "\nAbout " << days << " days ago Columbus ";
    cout << "stood on this spot.\n";
    return 0;
}
