/************************************************************
*
*   10. Future Value
*
*   Suppose you have a certain amount of money in a savings 
*   account that earns compound monthly interest, and you want 
*   to calculate the amount that you will have after a 
*   specific number of months. The formula, which is known 
*   as the future value formula, is:
*
*   F = P x (1 + i)^t //---> F = P * pow((1 + i), t);
*
*   The terms in the formula are as follows:
*
*   • F is the future value of the account after the 
*       specified time period.
*   • P is the present value of the account.
*   • i is the monthly interest rate.
*   • t is the number of months.
*
*   Write a program that prompts the user to enter the 
*   account’s present value, monthly interest rate, and 
*   the number of months that the money will be left in the 
*   account. The program should pass these values to a 
*   function named futureValue that returns the future value 
*   of the account, after the specified number of months. The 
*   program should display the account’s future value.
*
* 	Jesus Hilario Hernandez
* 	December 16, 2018
*
*************************************************************/
#include <iostream>
#include <cmath> // pow(5, n) = 5^n
using namespace std;

// Function Prototypes
double futureValue(double, double, double);
double inputValidate(double);

int main()
{
    // Variables
    double P,   // Present value
           F,   // Future value
           i,   // Monthly interest rate
           t;   // Number of months
    
    char choice;

    do 
    {
        // prompts user to enter account’s present value, 
        // monthly interest rate, and number of months 
        // the money will be left in account
        cout << "Enter account's present value  : ";
        P = inputValidate(P);

        cout << "Enter monthly interest rate    : ";
        i = inputValidate(i);

        cout << "Enter number of months         : ";
        t = inputValidate(t);

        cout << "Future value is: $"
             << futureValue(P, i, t) << endl << endl;

        cout << "Would you like to make another calculation? (y/n):";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}

/********************************************************
 * Definition of futureValue function:                  *
 * The futureValue function calculates the present      *
 * value using this formula: P * pow((1 + i), t);       *
 * accepting the present value (P),monthly interest     *
 * rate (i), and number of months (t) as arguments.     *
 ********************************************************/
double futureValue(double P, double i, double t)
{
    i *= .01; // 3.33% = .0333
    return P * pow((1 + i), t);
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than a (double), the      *
 * inputValidate will display an error, clear the input *
 * stream, ignore previous input up untill the new      *
 * line (\n) character.                                 *
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