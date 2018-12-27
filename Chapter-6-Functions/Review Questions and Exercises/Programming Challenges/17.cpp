/************************************************************
 *
 *   17. Transient Population
 *
 *   Modify Programming Challenge 16 to also consider the 
 *   effect on population caused by people moving into or out 
 *   of a geographic area. Given as input a starting population 
 *   size, the annual birth rate, the annual death rate, the 
 *   number of individuals who typically move into the area 
 *   each year, and the number of individuals who typically leave 
 *   the area each year, the program should project what the 
 *   population will be numYears from now. You can either prompt 
 *   the user to input a value for numYears, or you can set it
 *   within the program.
 * 
 *   Input Validation: Do not accept numbers less than 2 for 
 *                     the starting size. Do not accept 
 *                     negative numbers for birth rate, death 
 *                     rate, arrivals, or departures.
 *
 * 	Jesus Hilario Hernandez
 * 	December 24, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
double calcOfPopulation(double, double, double, double, double);
double inputValidate(double, int);

int main()
{
     double P, // population size
            B, // birth rate
            D, // death rate
            numYears,
            arrivals,
            departures; 

     cout << "Starting size of population: ";
     P = inputValidate(P, 2);

     cout << "Annual birth rate: ";
     B = inputValidate(B, 0);

     cout << "Annual death rate: ";
     D = inputValidate(D, 0);

     cout << "Arrivals each year: ";
     arrivals = inputValidate(arrivals, 0);

     cout << "Departures each year: ";
     departures = inputValidate(departures, 0);


     cout << "Number of years to display: ";
     numYears = inputValidate(numYears, 1);
 

     cout << "Population size for "
          << numYears << " years "
          << " = " 
          << (calcOfPopulation(P, B, D, arrivals, departures) * numYears)
          << endl;

    return 0;
}

/*******************************************************
 * function definition for calOfPopulation():          *
 * calOfPopulation calculates the size of the          *
 * population for a year.                              *
 *******************************************************/
double calcOfPopulation(double P, 
                        double B, 
                        double D, 
                        double arrivals, 
                        double departures)
{
     B *= .01; // 3.33% = .0333
     D *= .01; // 4.44% = .0444

     return ((P + (B * P) - (D * P)) + arrivals) - departures;
}

/*******************************************************
 * Definition for inputValidate():                     *
 * inputValidate checks user input for a double        *
 * less than num2. If a double less than num2 is found,* 
 * a  while loop displays an error, clears and         *
 * ignores previous input, and prompts the user to     *
 * try again.                                          *
 *******************************************************/
double inputValidate(double num1, int num2)
{
    
    while(!(cin >> num1) || num1 < num2)
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
}