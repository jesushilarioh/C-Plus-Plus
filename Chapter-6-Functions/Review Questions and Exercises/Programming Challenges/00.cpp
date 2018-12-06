/************************************************************
*
*   04. Safest Driving Area
*
*   Write a program that determines which of five geographic 
*   regions within a major city (north, south, east, west, 
*   and central) had the fewest reported automobile accidents 
*   last year. It should have the following two functions, 
*   which are called by main.
*
*   • int getNumAccidents() is passed the name of a region. 
*       It asks the user for the number of automobile 
*       accidents reported in that region during the 
*       last year, vali- dates the input, then returns it. 
*       It should be called once for each city region.
*
*   • void findLowest() is passed the five accident totals. 
*       It determines which is the smallest and prints the 
*       name of the region, along with its accident figure.
*
*   Input Validation: Do not accept an accident number that 
*                       is less than 0.
*
* 	Jesus Hilario Hernandez
* 	December 6, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Global constants

// Prototype

int main()
{
    // Variables

    return 0;
}

/********************************************************
 * double getSales() is passed the name of a division.  *
 * It asks the user for a division’s quarterly sales    *
 * figure, validates the input, then returns it. It     *
 * should be called once for each division.             *
 ********************************************************/

/********************************************************
 * void findHighest() is passed the four sales totals.  *
 * It determines which is the largest and prints the  *
 * name of the high grossing division, along with its   *
 * sales figure.                                        *
 ********************************************************/

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input for negative values  *
 * and for other data types that are not of integer     *
 * type data. If user input is such, the user will be   *
 * prompted to try again.                               *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}