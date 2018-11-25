/********************************************************************
*
*	  6.9 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	November 24th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

void func1(double, int);    // Function prototype

int main()
{
    int x = 0;
    double y = 1.5;

    cout << x << " " << y << endl;
    func1(y, x);
    cout << x << " " << y << endl;
    return 0;
}

void func1(double a, int b)
{
    cout << a << " " << b << endl;
    a = 0.0;
    b = 10;
    cout << a << " " << b << endl;
}

/********************************************************************
*	  ANSWER: 
*       0 1.5
*       1.5 0
*       0 10
*       0 1.5
********************************************************************/