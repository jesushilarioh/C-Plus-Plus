/*
        PROGRAM: DISTANCE.CPP
        Written by Jesus Hilario Hernandez
        This program calculates the distance
        using speed and time.
        Last modification: 9/21/2016
 */

#include <iostream>

//declares that the program will be
//accessing entities whose names are
//part of the namespace call std.

using namespace std;

int main()
{
    int speed = 10, time = 10, distance;  //variables

    //mulitiplying speed by time.
    distance = speed * time;

    //displays the result of distance calculation
    cout << "The distance of speed by time is " << distance << endl;

    return 0; //terminates when program has run succesfully.
}
