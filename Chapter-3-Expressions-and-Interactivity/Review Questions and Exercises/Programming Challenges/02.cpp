/********************************************************************
*
*	02. STADIUM SEATING
*
*       There are three seating categories at a stadium. For a
*       softball game, Class A seats cost $15, Class B seats cost $12,
*       and Class C seats cost $9. Write a program that ask how many
*       tickets for each class of seats were sold, then displays the
*       amount of income generated from ticket sales. Format your dollar
*       amount in fixed-point notation, with two decimal places of
*       precision, and be sure the decimal point is always displayed.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const float CLASS_A_COST_PER_SEAT = 15.00,
              CLASS_B_COST_PER_SEAT = 12.00,
              CLASS_C_COST_PER_SEAT = 9.00;

    int seatsSoldClassA,
        seatsSoldClassB,
        seatsSoldClassC;

    float classATotal,
          classBTotal,
          classCTotal,
          totalIncomeGenerated;

    // Ask user for number of seats sold per class
    cout << endl;
    cout << "Enter number of seats sold in Class A: ";
    cin >> seatsSoldClassA;
    cout << "Enter number of seats sold in Class B: ";
    cin >> seatsSoldClassB;
    cout << "Enter number of seats sold in Class C: ";
    cin >> seatsSoldClassC;

    // Calculate cost per section
    classATotal = seatsSoldClassA * CLASS_A_COST_PER_SEAT;
    classBTotal = seatsSoldClassB * CLASS_B_COST_PER_SEAT;
    classCTotal = seatsSoldClassC * CLASS_C_COST_PER_SEAT;

    totalIncomeGenerated = classATotal + classBTotal + classCTotal;

    // Display income generated from ticket sales
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << seatsSoldClassA << " Class A seats @ $";
    cout << setw(6) << CLASS_A_COST_PER_SEAT;
    cout << " = $" << classATotal << '.' << endl;

    cout << seatsSoldClassB << " Class B seats @ $";
    cout << setw(6) << CLASS_B_COST_PER_SEAT;
    cout << " = $" << classBTotal << '.' << endl;

    cout << seatsSoldClassC << " Class C seats @ $";
    cout << setw(6) << CLASS_C_COST_PER_SEAT;
    cout << " = $" << classCTotal << '.' << endl;

    cout << endl;
    cout << setw(6) << "Total income generated for all seats: $";
    cout << totalIncomeGenerated << '.' << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
// Resources used:
//
// <---- how to declare a constant int ---->:
// Chapter-7-Arrays/7.5-the-range-based-for-loop/7-12.cpp
//
//
