/************************************************************
 *
 *   16. Population
 * 
 *   In a population, the birth rate is the percentage increase 
 *   of the population due to births, and the death rate is the 
 *   percentage decrease of the population due to deaths. Write a 
 *   program that displays the size of a population for any number 
 *   of years. The program should ask for the following data:
 *   
 *   • The starting size of a population
 *   • The annual birth rate
 *   • The annual death rate
 *   • The number of years to display
 * 
 *   Write a function that calculates the size of the population 
 *   for a year. The formula is
 * 
 *   N = P + BP − DP
 * 
 *   where N is the new population size, P is the previous 
 *   population size, B is the birth rate, and D is the death 
 *   rate.
 * 
 *   Input Validation: Do not accept numbers less than 2 for 
 *                       the starting size. Do not accept 
 *                       negative numbers for birth rate or 
 *                       death rate. Do not accept numbers less 
 *                       than 1 for the number of years.
 *
 * 	Jesus Hilario Hernandez
 * 	December 23, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
double calcOfPopulation(double P, double B, double D);
double inputValidate(double, int);

int main()
{
     double P, // population size
            B, // birth rate
            D, // death rate
            num_years; 

     cout << "Starting size of population: ";
     P = inputValidate(P, 2);

     cout << "Annual birth rate: ";
     B = inputValidate(B, 0);

     cout << "Annual death rate: ";
     D = inputValidate(D, 0);

     cout << "Number of years to display: ";
     num_years = inputValidate(num_years, 1);

     cout << "Population size for "
          << num_years << " years "
          << " = " 
          << (calcOfPopulation(P, B, D) * num_years)
          << endl;

    return 0;
}

/*******************************************************
 * function definition for calOfPopulation():          *
 * calOfPopulation calculates the size of the          *
 * population for a year. The formula is
 *******************************************************/
double calcOfPopulation(double P, double B, double D)
{
     B *= .01; // 3.33% = .0333
     D *= .01; // 4.44% = .0444
     return P + (B * P) - (D * P);
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