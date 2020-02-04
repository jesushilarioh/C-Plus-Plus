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
#include <iomanip>

using namespace std;

double inputValidate(double);
double kineticEnergy(double, double);
void displayInfo(double, double, double);

int main()
{
	double KINETIC_ENERGY,
            mass,
            velocity;

    cout << "Enter the object's mass: ";
    mass = inputValidate(mass);

    cout << "Enter the object's velocity: ";
    velocity = inputValidate(velocity);

	KINETIC_ENERGY = kineticEnergy(mass, velocity);

	displayInfo(mass, velocity, KINETIC_ENERGY);

  	return 0;
}

/********************************************************
 * Definition of inputValidate()                        *                                        *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. A number must be entered. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

/********************************************************
 * Definition of kineticEnergy function:                *
 ********************************************************/
double kineticEnergy(double mass, double velocity)
{
    return (0.5) * mass * pow(velocity, 2);
}

/********************************************************
 * Definition of displayInfo()                          *
 ********************************************************/ 
void displayInfo(double mass, double velocity, double KINETIC_ENERGY)
{
	cout << setprecision(2) << fixed;
    cout << endl;
    cout << "Mass           = " << mass << endl;
    cout << "Velocity       = " << velocity << endl;
    cout << "Kinetic Energy = " << KINETIC_ENERGY << endl;
    cout << endl;
}