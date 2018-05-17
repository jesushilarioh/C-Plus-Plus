/********************************************************************
*
*	  011. POPULATION
*
*       Write a program that will predict the size of a population of
*       organisms. The program should ask the user for the starting
*       number of organisms, their average daily population
*       increase (as a percentage), and the number of days they
*       will multiply. A loop should display the size of the
*       population for each day.
*
*       Input Validation: Do not accept a number less than 2 for the
*                         starting size of the popu- lation. Do not
*                         accept a negative number for average
*                         daily population increase. Do not accept a
*                         number less than 1 for the number of days
*                         they will multiply.
*
* 	Jesus Hilario Hernandez
* 	May 17th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // ASK
    // ask the user for:
    // the starting number of organisms,
    cout << "Enter the starting number of organisms: ";
    cin >> starting_num_of_organisms;

    // their average daily population increase (as a percentage),
    cout << "Enter average daily population increase (%): ";
    cin >> average_daily_population;

    // the number of days they will multiply.
    cout << "Enter number of day to multiply: ";
    cin >> num_of_days_to_multiply;

    // A loop should display the size of the population for each day

    return 0;
}
