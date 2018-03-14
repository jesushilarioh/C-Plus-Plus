/********************************************************************
*
*	41. Match the conditional expression with the if/else
*       statement that performs the same operation.
*
*       A) q = x < y ? a + b : x * 2;
*       B) q = x < y ? x * 2 : a + b;
*       C) x < y ? q = 0 : q = 1;
*       ____ if (x < y)
*                q = 0;
*            else
*                q = 1;
*
*       ____ if (x < y)
*                q = a + b;
*            else
*                q = x * 2;
*
*       ____ if (x < y)
*                q = x * 2;
*            else
*                q = a + b;
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int a, b, q, x, y;

    // Solution for A) q = (x < y) ? (a + b) : (x * 2);
    if (x < y)
        q = a + b;
    else
        q = x * 2;

    // Solution for B) q = x < y ? x * 2 : a + b;
    if (x < y)
        q = x * 2;
    else
        q = a + b;

    // Solution for C) x < y ? q = 0 : q = 1;
    if (x < y)
        q = 0;
    else
        q = 1;

    // Terminate program
    return 0;
}
