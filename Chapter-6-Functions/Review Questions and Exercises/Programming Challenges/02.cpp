/************************************************************
*
*   02. Rectangle Area—Complete the Program
*       
*       If you have downloaded this book’s source code from 
*       the companion Web site, you will find a partially 
*       written program named AreaRectangle.cpp in the Chapter 
*       06 folder. (The companion Web site is at 
*       www.pearsonhighered.com/gaddis.) Your job is to complete 
*       the program. When it is complete, the program will ask 
*       the user to enter the width and length of a rectangle and 
*       then display the rectangle’s area. The program calls the 
*       following functions, which have not been written:
*
*       • getLength – This function should ask the user to enter 
*           the rectangle’s length and then return that value as 
*           a double.
*
*       • getWidth – This function should ask the user to enter the 
*           rectangle’s width and then return that value as a 
*           double.
*
*       • getArea – This function should accept the rectangle’s 
*           length and width as argu- ments and return the 
*           rectangle’s area. The area is calculated by multiplying 
*           the length by the width.
*
*       • displayData – This function should accept the 
*           rectangle’s length, width, and area as arguments and 
*           display them in an appropriate message on the screen.
*
* 	Jesus Hilario Hernandez
* 	December 4, 2018
*
*************************************************************/
#include <iostream>
#include <string>
using namespace std;

double inputValidate(double num);
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double length,
           width,
           area;

    length = getLength(length);
    width  = getWidth(width);
    area   = getArea(length, width);
    displayData(length, width, area);

    return 0;
}

double getLength(double num)
{
    cout << "Enter rectangle's length: ";
    num = inputValidate(num);
    return num;
}

double getWidth(double num)
{
    cout << "Enter rectangle's width: ";
    num = inputValidate(num);
    return num; 
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double l, double w, double a)
{
    cout << "Length = " << l << endl;
    cout << "Width  = " << w << endl;
    cout << "Area   = " << a << endl;
}

double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}