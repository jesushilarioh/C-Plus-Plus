#include <iostream>
using namespace std;
/*
 *  (57.)
 *  Errors include:
 * a). missing a return keyword for returning a value
 * b). missing parenthesis around values 1, 2, and 3
 * c). parameter data types might need to be changed
 *      to double. Else, decimal value will be 
 *      truncated.
 */ 
// ORIGINAL
// double average(int value1, int value2, int value3) 
// {
//     double average;
//     average = value1 + value2 + value3 / 3; 
// }

// CORRECTION
double average(double value1, double value2, double value3) 
{
    double average;
    average = (value1 + value2 + value3) / 3;
    return average; 
}

// APPLICATION
int main()
{
    double total_average,
           num1 = 78.7,
           num2 = 98.9,
           num3 = 99.0;
           
    total_average = average(num1, num2, num3);

    cout << "average = " << total_average << endl;

    return 0;
}