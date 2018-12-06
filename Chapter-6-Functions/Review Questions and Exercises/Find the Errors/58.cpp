#include <iostream>
using namespace std;
/*
 *  (58.)
 *  Errors include:
 * a). parameters with default value must be listed last
 * b). header return type should be int, function is 
 *      returning a value.
 */ 
// ORIGINAL
// void area(int length = 30, int width) 
// {
//     return length * width; 
// }

// CORRECTION
int area(int width, int length = 30)
{
    return length * width;
}

// APPLICATION
int main()
{
    cout << "area = "
         << area(3)
         << endl;

    return 0;
}