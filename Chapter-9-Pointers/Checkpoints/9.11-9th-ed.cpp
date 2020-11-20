/**
 * Complete the followig program skeleton. When finished, the program will ask
 * the user for a length (in inches), then convert the value to centimeters, and display
 * the result. You are to write the function convert. (Note: 1 inch = 2.54 cm. Do Not
 * modify function main.)
 */
#include <iostream>
#include <iomanip>
using namespace std;

// Write a function prototype here
void convert(double *);

int main()
{
    double measurement;

    cout << "Enter a length in inches, and I will convert\n"
         << "it to centemeters: ";
    cin >> measurement;
    convert(&measurement);
    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;

    return 0;
}
/**
 * Write a function convert here.
 */
void convert(double *number)
{
    (*number) *= 2.54;
}