//**************************************
// 6. Calculate Area of a Circle
//
// By: Jesus HIlario Hernandez
// Last updated: November 1, 2016
//**************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables: Hold area, radius, PI.
    const double PI = 3.14;
    double area, radius, radSquare;

    // Explain program, then get radius
    cout << "This program calculates the area "
         << "of a circle.\n" << endl;
    cout << "Let's start off with the radius.\n"
         << "What is the radius of the circle? ";
    cin >> radius;
    cout << "\n\t\tAwesome!" << endl << endl;

    // Calculate and display
    radSquare = (radius * radius);
    area = PI * (radius * radius);
    cout << "When finding the area of a circle, \n"
         << "the radius must be squared and then\n"
         << "multiplied by PI(3.14). " << endl;
    cout << "\nSo, " << radius << " x " << radius << " = " << radSquare << endl
         << "and " << radSquare << " x " << PI << " = " << area << "." << endl
         << "The area of the circle is "<< area << endl;
    // Space before return 0
    cout << '\n' << endl;
    return 0;
}
