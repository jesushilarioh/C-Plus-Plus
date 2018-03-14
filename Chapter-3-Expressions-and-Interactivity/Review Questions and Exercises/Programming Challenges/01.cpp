/********************************************************************
*
*	01. MILES PER GALLON
*
*       Write a program that calculates a car's gas mileage. The
*       program should ask the user to enter the number of gallons of
*       gas the car can hold and the number of miles it can be driven
*       on a full tank. It should then display the number of miles
*       that may be driven per gallon of gas.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int numberOfGallons,
        fullTankMiles;
    float MPG;

    // Ask user to enter number of gallons car can hold
    cout << endl;
    cout << "Enter number of gallons the car can hold: ";
    cin >> numberOfGallons;

    // Ask user for number of miles can be driven on full tank
    cout << "Enter number of miles the car can be " << endl;
    cout << "driven on a full tank of gas: ";
    cin >> fullTankMiles;

    // Calculate number of miles that can be driven per gallon of gas
    MPG = static_cast<float>(fullTankMiles) / numberOfGallons;

    // Display number of miles driven per gallon of gas
    cout << "The car gets " << MPG << " miles per gallon."<< endl;
    cout << endl;
    return 0;
}
