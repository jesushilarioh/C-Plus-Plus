// This program uses the Rectangle class's specification
// and implementation files.
#include <iostream>
#include "Rectangle.h"	// Contains the class declaration.
using namespace std;

int main()
{
	Rectangle box;		// Define an instance of the class.
	float rectWidth,	// Local varibale for width.
		  rectLength;	// Local variable for length.

	// Get the rectangle's width and length from the user.
	cout << "This program will calculate the area of a\n";
	cout << "rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;

	if (!box.setWidth(rectWidth))			// Store the width.
		cout << "Invalid value for width.\n";
	else if (!box.setLength(rectLength))	// Store the length.
		cout << "Invalid value for length.\n";
	else
	{
		// Display the rectangle's data.
		cout << "Here is the rectangle's data:\n";
		cout << "Width: " << box.getWidth() << endl;
		cout << "Length: " << box.getLength() << endl;
		cout << "Area: " << box.getArea() << endl;
	}
	return 0;
}
