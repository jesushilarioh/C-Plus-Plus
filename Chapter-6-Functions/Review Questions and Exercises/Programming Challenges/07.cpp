/************************************************************
*
*   07. Celsius Temperature Table
*
*   The formula for converting a temperature from Fahrenheit 
*   to Celsius is
*
*   C = 5/9(F - 32)
*
*   where F is the Fahrenheit temperature and C is the Celsius 
*   temperature. Write a function named celsius that accepts 
*   a Fahrenheit temperature as an argument. The function 
*   should return the temperature, converted to Celsius. 
*   Demonstrate the function by calling it in a loop that 
*   displays a table of the Fahrenheit temperatures 0 through 
*   20 and their Celsius equivalents.
*
* 	Jesus Hilario Hernandez
* 	December 10, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
double celsius(double);

int main()
{
    // Variables
    double C;

    // Demonstrate the function by calling it in a loop that 
    // displays a table of the Fahrenheit temperatures 0 through 
    // 20 and their Celsius equivalents.
    cout << "-----------------------------------|\n";
    cout << "Fahrenheit     | Celsius\n";
    cout << "-----------------------------------|\n";
    for (int F = 0; F <= 20; F++)
    {
        cout << F << "               ";
        cout << celsius(F) << endl;
    }

    return 0;
}

/********************************************************
 * Definition of celsius function:                      *
 * The celsius function accepts a Fahrenheit            *
 * temperature as an argument. The celsius funtion      *
 * also returns the Fahrenheit temperature converted    *
 * to Celsius                                           *
 ********************************************************/
double celsius(double F)
{
    return (5.0/9.0) * (F - 32.0);
}