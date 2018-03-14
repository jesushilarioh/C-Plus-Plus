/********************************************************************
*
*	15-24. Use the following functions and include statements within
*       a program:
*       15. cosine
*       16. sine
*       17. tangent
*       18. exponential
*       19. remainder
*       20. natural logarithm
*       21. base-10 logarithm
*       22. power
*       23. square root
*       24. <cmath>
*
* 	Jesus Hilario Hernandez
* 	January 4th 2017
*
*
********************************************************************/
#include <iostream>
#include <cmath> // 24. <cmath>

using namespace std;

int main()
{
    int x = 2;
    double y = 0; // double has a higher data type ranking than an int

    cout << endl;

    // 15. consine
    y = cos(x);
    cout << "y = cos(x) is " << y << endl;

    // 16. sine
    y = sin(x);
    cout << "y = sin(x) is " << y << endl;

    // 17. tangent
    y = tan(x);
    cout << "y = tan(x) is " << y << endl;

    // 18. exponential
    y = exp(x);
    cout << "y = exp(x) is " << y << endl;

    // 19. remainder
    y = fmod(45, x);
    cout << "y = fmod(45, x) is " << y << endl;

    // 20. natural logarithm (ln)
    y = log(x);
    cout << "y = log(x) is " << y << endl;

    // 21. base-10 logarithm
    y = log10(x);
    cout << "y = log10(x) is " << y << endl;

    // 22. power
    y = pow(x, 2);
    cout << "y = pow(x, 2) is " << y << endl;

    // 23. square root
    y = sqrt(x);
    cout << "y = sqrt(x) is " << y << endl;
    cout << endl;

    // Treminate program
    return 0;
}
