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
 * getNumAccidents() is passed the name of a region.    *
 * It asks the user for the number of automobile        *
 * accidents reported in that region during the last    * 
 * year, vali- dates the input, then returns it. It     * 
 * should be called once for each city region.          *
 ********************************************************/
int getNumAccidents(string region)
{

}

/********************************************************
 * findLowest() is passed the five accident totals. It  *
 * determines which is the smallest and prints the name *     
 * of the region, along with its accident figure.       *
 ********************************************************/
void findLowest(double total1, 
                double total2, 
                double total3, 
                double total4, 
                double total5)
{

}

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input for negative values  *
 * and for other data types that are not of double      *
 * type data and does not accept a number that is less  *
 * than 0. If user input is such, the user will be     *
 * prompted to try again.                               *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}