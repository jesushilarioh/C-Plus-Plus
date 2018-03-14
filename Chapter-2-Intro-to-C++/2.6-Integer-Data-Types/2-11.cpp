//***********************************************************
// this program show three variables defined on the same line.
//
// By: Jesus Hilario Hernandez
// Last Update: November 22, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    int floors, rooms, suites;

    floors = 15;
    rooms = 300;
    suites = 30;
    cout << "The Grand Hotel has " << floors << " floors\n";
    cout << "with " << rooms << " roomms and " << suites;
    cout << " suites.\n";
    return 0;
}
