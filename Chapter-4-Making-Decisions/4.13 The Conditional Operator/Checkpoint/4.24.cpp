/********************************************************************
*
*	Checkpoint 4.24
*
*       Rewrite the following if/else statements as conditional
*       expressions:
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // A).
    // Variables
    int x = 29,
        y = 83,
        z = 0;

    // if/else statement
    if (x > y)
        z = 1;
    else
        z = 20;

    // Conditional Expression
    x > y ? z = 1 : z = 20;





    // B).
    // Variables
    int temp = 90,
        base = 50,
        population;

    // if/else statement
    if (temp > 45)
        population = base * 10;
    else
        population = base * 2;

    // Conditional Expression
    temp > 45 ? population = base * 10 : population == base * 2;





    // C).
    // Variables
    int hours = 54,
        wages = 350;

    // if/else statement
    if (hours > 40)
        wages *= 1.5;
    else
        wages *= 1;

    // Conditional Expression
    hours > 40 ? wages *= 1.5 : wages *= 1;





    // D).
    // Variables
    int result = 9;

    // if/else statement
    if (result >= 0)
        cout << "The result is positive.\n";
    else
        cout << "The result is negative.\n";

    // Conditional Expression
    cout << "The result is " << (result >= 0 ? "positive." : "negative.") << endl;
    // or
    result >= 0 ? cout << "The result is positive.\n" : cout << "the result is negative.\n";
    // Terminate Program
    return 0;
}
