//**************************************
// 5. Calculate Area of Rectangle
//
// By: Jesus HIlario Hernandez
// Last updated: Octobe 31, 2016
//**************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables: Hold length, width, and area.
    double area, length, width;

    // Explain program, then get length
    cout << "This program calculates the area "
         << "of a rectangle." << endl;
    cout << "Let's start off with the length.\n"
         << "What is the length of the rectangle? ";
    cin >> length;

    // Get width
    cout << "Ok, what is the width? ";
    cin >> width;

    // Calculate and display
    area = length * width;
    cout << "The area of a rectangle "
         << "whose length is " << length
         << "\nand whose width is " << width
         << "\nis " << area;

    // Space before return 0
    cout << '\n' << endl;
    return 0;
}
