//**************************************
// 7. Calculate Area of a Triangle
//
// By: Jesus HIlario Hernandez
// Last updated: November 1, 2016
//**************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables: Hold length, width, and area.
    double area, height, base;

    // Explain program, then get length
    cout << "This program calculates the area "
         << "of a triangle." << endl;
    cout << "Let's start off with the height.\n"
         << "What is the height of the triangle? ";
    cin >> height;

    // Get width
    cout << "Ok, what is the length of the base of our triangle? ";
    cin >> base;

    // Calculate and display
    area = (height * base) / 2;
    cout << "The area of a triangle "
         << "whose height is " << height
         << "\nand whose base is " << base
         << "\nis " << area << endl;
    cout << "To figure this out, " << endl
         << "we must multiply the base(" <<
         base << ") by the height(" <<
         height << ") " << endl
         << "and divide their sum by 2. " << endl;

    // Space before return 0
    cout << '\n' << endl;
    return 0;
}
