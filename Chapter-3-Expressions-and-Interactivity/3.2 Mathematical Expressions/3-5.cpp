//**************************************************
// This program calculates the area of a circle.
// The formula for the area of a circle is PI times
// the radius squared. PI is 3.14159.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 6, 2016
//**************************************************
#include <iostream>
#include <cmath>    // Needed for pow function
using namespace std;

int main()
{
    const double PI = 3.14159;
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius;
    area = PI * pow(radius, 2.0);
    cout << "The area is " << area << endl;
    return 0;
}
