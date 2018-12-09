/************************************************************
*
*   05. Falling Distance
*   
*       When an object is falling because of gravity, the 
*       following formula can be used to determine the distance 
*       the object falls in a specific time period:
*
*       d 􏰀= 1/2gt^2 [d = (0.5) * g * pow(t, 2)]
*
*       The variables in the formula are as follows: d is 
*       the distance in meters, g is 9.8, and t is the amount of 
*       time, in seconds, that the object has been falling.
*
*       Write a function named fallingDistance that accepts an 
*       object’s falling time (in seconds) as an argument. 
*       The function should return the distance, in meters, 
*       that the object has fallen during that time interval. 
*       Write a program that demonstrates the function by 
*       calling it in a loop that passes the values 1 through 
*       10 as arguments and displays the return value.
*
* 	Jesus Hilario Hernandez
* 	December 7, 2018
*
*************************************************************/
#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

// Global constants
const double g = 9.8;   // gravity

// Prototype
double fallingDistance(double);

int main()
{
    // Variables
    double d,       // distance
           t;       // time in seconds

    for (int i = 0; i < 10; i++)
    {
        d = fallingDistance(i + 1);
        
        cout << i + 1 << ". "
             << d
             << endl;
    }

    return 0;
}

/********************************************************
 * Definition of fallingDistance function:              *
 * The fallingDistance fucntion accepts object's        *
 * falling time (in seconds) as an argument. It returns *
 * the distance (d), in meters, that the object has     *
 * fallen during that time interval.                    *
 ********************************************************/
double fallingDistance(double falling_time)
{
    return (0.5) * g * pow(falling_time, 2);
}