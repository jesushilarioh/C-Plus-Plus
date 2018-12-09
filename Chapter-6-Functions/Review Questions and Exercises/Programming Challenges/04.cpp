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
*       last year, validates the input, then returns it. 
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
* 	December 7, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Global constants
const string NORTH = "North",
             SOUTH = "South",
             EAST = "East",
             WEST = "West",
             CENTRAL = "Central";

// Prototype
int getNumAccidents(string);
void findLowest(double, double, double, double, double);
void checkIfSmallest(double, double, double, double, double,string);
double inputValidate(double);

int main()
{
    // Variables
    double N_total,
           S_total,
           E_total,
           W_total,
           C_total;
    
    N_total = getNumAccidents(NORTH);
    S_total = getNumAccidents(SOUTH);
    E_total = getNumAccidents(EAST);
    W_total = getNumAccidents(WEST);
    C_total = getNumAccidents(CENTRAL);

    findLowest(N_total, 
               S_total, 
               E_total, 
               W_total, 
               C_total);

    return 0;
}

/********************************************************
 * getNumAccidents() is passed the name of a region.    *
 * It asks the user for the number of automobile        *
 * accidents reported in that region during the last    * 
 * year, validates the input, then returns it. It       * 
 * should be called once for each city region.          *
 ********************************************************/
int getNumAccidents(string region)
{
    double num;

    // asks the user for the number of automobile 
    // accidents reported in that region during the last 
    // year, validates the input, then returns it.
    cout << "What is the number of automobile accidents\n"
         << "reported in the " << region << " region \n"
         << "during the last year? ";

    num = inputValidate(num);

    cout << endl;

    return num;
}

/********************************************************
 * findLowest() is passed the five accident totals. It  *
 * determines which is the smallest and prints the name *     
 * of the region, along with its accident figure.       *
 ********************************************************/
void findLowest(double N_total, 
                double S_total, 
                double E_total, 
                double W_total, 
                double C_total)
{
    cout << "The region with the smallest accident\n"
         << "total is "; 

    checkIfSmallest(N_total, S_total, E_total, W_total, C_total, NORTH);
    checkIfSmallest(S_total, N_total, E_total, W_total, C_total, SOUTH);
    checkIfSmallest(E_total, N_total, S_total, W_total, C_total, EAST);
    checkIfSmallest(W_total, N_total, S_total, E_total, C_total, WEST);
    checkIfSmallest(C_total, N_total, S_total, E_total, W_total, CENTRAL);

    cout << endl << endl;    
}

/********************************************************
 * Definition of checkItSmallest()                      *
 * uses an if statment to check for the smallest number *
 ********************************************************/
void checkIfSmallest(double total1, 
                     double total2, 
                     double total3, 
                     double total4, 
                     double total5,
                     string region)
{
    if (total1 < total2)
   {
       if (total1 < total3)
       {
           if (total1 < total4)
            {
                if (total1 < total5)
                {
                    cout << region << ", with it's total\n"
                         << "being " << total1 << '.';
                }
            }
       }          
   }
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