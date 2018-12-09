/************************************************************
*
*   06. Kinetic Energy
*       In physics, an object that is in motion is said to 
*       have kinetic energy. The following formula can be 
*       used to determine a moving object’s kinetic energy:
*
*       KE = 1􏰆/2 mv^2 [KE = (0.5) * m * pow(v, 2);]
*
*       The variables in the formula are as follows: KE is the 
*       kinetic energy, m is the object’s mass in kilograms, 
*       and v is the object’s velocity, in meters per second.
*
*       Write a function named kineticEnergy that accepts an 
*       object’s mass (in kilograms) and velocity (in meters 
*       per second) as arguments. The function should return 
*       the amount of kinetic energy that the object has. 
*       Demonstrate the function by calling it in a program 
*       that asks the user to enter values for mass and 
*       velocity.
*
* 	Jesus Hilario Hernandez
* 	December 9, 2018
*
*************************************************************/
#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

// Function Prototypes
double kineticEnergy(double, double);
double inputValidate(double);
void displayInfo(double, double, double);

int main()
{
    // Variables
    double KE,  // kinetic energy
            m,  // object’s mass in kilograms, 
            v;  // object’s velocity, in meters per second.

    // asks user for mass.
    cout << "Enter the object's mass: ";
    m = inputValidate(m);

    // asks user for velocity.
    cout << "Enter the object's velocity: ";
    v = inputValidate(v);
    
    // Calculate Kinetic Energy
    KE = kineticEnergy(m, v);

    // Display Info
    displayInfo(m, v, KE);

    return 0;
}

/********************************************************
 * Definition of kineticEnergy function:                *
 * The kineticEnergy function accepts an object’s mass  *
 * (in kilograms) and velocity (in meters per second)   *
 * as arguments. It also returns the amount of kinetic  *
 * energy that the object has.                          *
 ********************************************************/
double kineticEnergy(double mass, double velocity)
{
    return (0.5) * mass * pow(velocity, 2);
}

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input errors. When the     *
 * user enters anything other than an integer, the user *
 * will receive an error message and as the user to     *
 * retry again.                                         *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

/********************************************************
 * Definition of displayInfo.                           *
 * The displayInfo function displays mass, volume, and  *
 * kinetic energy of an object.                         *
 ********************************************************/ 
void displayInfo(double m, double v, double KE)
{
    cout << endl;
    cout << "Mass           = " << m << endl;
    cout << "Velocity       = " << v << endl;
    cout << "Kinetic Energy = " << KE << endl;
    cout << endl;
}