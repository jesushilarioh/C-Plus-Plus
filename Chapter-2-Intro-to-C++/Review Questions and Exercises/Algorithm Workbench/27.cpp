//******************************************************************
// Convert the follow pseudocode to C++ code. Be sure to define the
// appropriate variables.
//
//      Store 20 in the speed variable.
//      Store 10 in the time variable.
//      Multiply speed by time and store the result in the
//          distance variable.
//      Display the contents of the distance variable.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//******************************************************************
#include <iostream>
using namespace std;

int main()
{
    int speed = 20,
        time = 10,
        distance;

    distance = speed * time;
    cout << "The distance of speed multiplied by time is " << distance
         << endl;
    return 0;
}
