//*********************************************
// Chapter 6, Programming Challenge 2
//
// By: JESUS HILARIO HERNANDEZ
// Last modified: October 12, 2016
//*********************************************
#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();                         // Return length
double getWidth();                          // Return width
double getArea(double, double);             // Return Area
void displayData(double, double, double);   // Display Data

int main()
{
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
    
    // Get the rectangle's length.
    length = getLength();
    
    // Get the rectangle's width.
    width = getWidth();
    
    // Get the rectangle's area.
    area = getArea(length, width);
    
    // Display the rectangle's data.
    displayData(length, width, area);
    
    return 0;
}

//***************************************************
// Definition of function getLength function.       *
// getLength is a local variable. It's value is     *
// assigned to length variable in int main()        *
// function.                                        *
//***************************************************
double getLength()
{
    double num;
    cout << "Enter the length: ";
    while (!(cin >> num))
    {
        //Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}
//***************************************************
// Definition of function getWidth function.        *
// getLength is a local variable. It's value is     *
// assigned to width variable in int main()         *
// function.                                        *
//***************************************************
double getWidth()
{
    double num;
    cout << "Enter the width: ";
    while (!(cin >> num))
    {
        //Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}
//***************************************************
// Definition of function getArea function.         *
// getArea is a local variable. It's value is       *
// assigned to area variable in int main()          *
// function.                                        *
//***************************************************
double getArea(double length, double width)
{
    return length * width;
}
//***************************************************
// Definition of function displayData function.     *
// displayData uses length, width, and area         *
// variables to display them the the user.          *
//***************************************************
void displayData(double length, double width, double area)
{
    cout << "The length is " << length << "." << endl;
    cout << "The width is " << width << "." << endl;
    cout << "The area of this rectangle is " << area << endl;
}
