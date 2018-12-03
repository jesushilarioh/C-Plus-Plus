/************************************************************
*
*   6.24 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	December 2, 2018
*
*************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;

void showVals(double, double);

int main()
{
    double x = 1.2, 
           y = 4.5;
    
    showVals(x, y);

    return 0;
}

void showVals(double p1, double p2)
{
    cout << p1 << endl;
    exit(0);
    cout << p2 << endl;
}

// OUTPUT:
// 1.2