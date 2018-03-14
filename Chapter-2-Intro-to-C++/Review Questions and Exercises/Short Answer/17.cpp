//************************************************************************
// Assume w = 5, x = 4, y = 8, and z = 2. What value will
// be stored in result in each of the following statements?
// A) result = x + y;
// B) result = z * 2;
// C) result = y / x;
// D) result y - z;
// E) result = w % 2;
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//************************************************************************
#include <iostream>
using namespace std;

int main()
{
    int w = 5,
        x = 4,
        y = 8,
        z = 2,
        result;
    // A)
    result = x + y;
    cout << "The result variable holds a value of " << result << endl;

    // B)
    result = z * 2;
    cout << "The result variable now holds a value of " << result << endl;

    // C)
    result = y / x;
    cout << "The result variable now holds a value of " << result << endl;

    // D)
    result = y - z;
    cout << "The result variable now holds a value of " << result << endl;

    // E)
    result = y - z;
    cout << "The result variable now holds a value of " << result << endl;

    // F)
    result = w % 2;
    cout << "The result variable now holds a value of " << result << endl;
    return 0;
}
