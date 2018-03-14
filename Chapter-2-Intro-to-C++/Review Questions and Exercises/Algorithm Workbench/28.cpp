//**********************************************************
// Convert the follow pseudocode to C++ code. Be sure to
// define the appropriate variables.
//
//      Store 172.5 in the force variable.
//      Store 27.5 in the area variable.
//      Divide area by force and store the result in the
//          pressure variable.
//      Display the contents of the pressure variable.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double force = 172.5,
           area = 27.5,
           pressure;

    // Divide area by force and store in pressure variables
    pressure = force / area;

    // Display contents in the pressure variables
    cout << "\nThe contents in the pressure variable are " << pressure
         << endl << endl;
    return 0;
}
