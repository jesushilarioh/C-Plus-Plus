/************************************************************
*
*   6.25 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	December 2, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

int manip(int);
int manip(int, int);
int manip(int, double);

int main()
{
    int x = 2,
        y = 4,
        z;

    double a = 3.1;

    z = manip(x) + manip(x, y) + manip(y, a);
    cout << z << endl;

    return 0;
}

int manip(int val)
{
    return val + val * 2;
}

int manip(int val1, int val2)
{
    return (val1 + val2) * 2;
}

int manip(int val1, double val2)
{
    return val1 * static_cast<int>(val2);
}

// OUTPUT:
// 30