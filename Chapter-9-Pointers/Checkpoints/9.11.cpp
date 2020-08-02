/**
 * 9.11 Complete the following program skeleton. When 
 *  finished, the program will ask the user for a 
 *  length (in inches), convert that value to centimeters, 
 *  and display the result. You are to write the function 
 *  convert. (Note: 1 inch = 2.54 cm. Do not modify 
 *  function main.)
 **/
#include <iostream>
#include <iomanip>
using namespace std;

// Write you function prototype here.
void convert(double *);

int main()
{
    double measurement;

    cout << "Enter a length in inches, and I will convert\n";
    cout << "it to centimeters: ";
    cin >> measurement;

    convert(&measurement);

    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;

    return 0;
}

void convert(double *measurement)
{
    // (Note: 1 inch = 2.54 cm. Do not modify function main.)
    *measurement *= 2.54;
}