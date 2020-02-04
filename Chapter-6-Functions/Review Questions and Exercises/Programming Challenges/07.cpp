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

double celsius(double);

int main()
{
    const int MIN_TEMP = 0,
              MAX_TEMP = 20;
    double C;

    cout << "-----------------------------------|\n";
    cout << "Fahrenheit     | Celsius\n";
    cout << "-----------------------------------|\n";

    for (int F = MIN_TEMP; F <= MAX_TEMP; F++)
    {
        C = celsius(F);

        cout << F << "               ";
        cout << C << endl;

    }
    
    return 0;
}

/********************************************************
 * celsius()                                            *
 ********************************************************/
double celsius(double F)
{
    return (5.0/9.0) * (F - 32.0);
}