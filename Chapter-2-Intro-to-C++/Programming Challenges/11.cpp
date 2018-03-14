/********************************************************************
*
*	11. DISTANCE PER TANK OF GAS
*       A car with a 20-gallon gas tank averages 23.5 mile per gallon
*       when driven in town and 28.9 miles per gallon when driven on
*       the highway. Write a program that calculates and displays the
*       distance the car can travel on one tank of gas when driven in
*       town and when driven on the highway.
*
*       Hint: The following formula can be used to calculate the distance:
*
*       Distance = Number of Gallons X Average Miles per Gallon
*
* 	Jesus Hilario Hernandez
* 	December 19th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numOfGallons = 20;
    float inTownMPG = 23.5,
          outOfTownMPG = 28.9;

    cout << endl;
    cout << "The distance a car can travel in town" << endl;
    cout << "on a 20-gallon gas tank at 23.5 MPG is ";
    cout << numOfGallons * inTownMPG << " miles." << endl;
    cout << endl;
    cout << "The distance a car can travel on the highway" << endl;
    cout << "on a 20-gallon tank of gas at 28.9 MPG is ";
    cout << numOfGallons * outOfTownMPG << " miles." << endl;
    cout << endl;

    return 0;
}
