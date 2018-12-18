/************************************************************
 *
 *   13. Days Out
 *
 *      Write a program that calculates the average number 
 *      of days a company’s employees are absent. The program 
 *      should have the following functions:
 * 
 *      • A function called by main that asks the user for 
 *          the number of employees in the company. This value 
 *          should be returned as an int. (The function accepts 
 *          no arguments.)
 * 
 *      • A function called by main that accepts one argument: 
 *          the number of employees in the company. The 
 *          function should ask the user to enter the number 
 *          of days each employee missed during the past year. 
 *          The total of these days should be returned as an int.
 * 
 *      • A function called by main that takes two arguments: 
 *          the number of employees in the company and the 
 *          total number of days absent for all employees 
 *          during the year. The function should return, as a 
 *          double, the average number of days absent. (This 
 *          function does not perform screen output and does 
 *          not ask the user for input.)
 * 
 *      Input Validation: Do not accept a number less than 1 
 *                          for the number of employees. Do not 
 *                          accept a negative number for the days 
 *                          any employee missed.
 *
 * 	Jesus Hilario Hernandez
 * 	December 18th, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants

// Function Prototypes
int numEmployees();
int daysAbsent(int);
double avgDaysAbsent(int, int);
int inputValidate(int, int);

int main()
{
    // Variables
    int num_employees,
        total_days_absent;
        
    double avg_days_absent;

    num_employees = numEmployees();
    cout << endl;
    total_days_absent = daysAbsent(num_employees);
    cout << endl;
    avg_days_absent = avgDaysAbsent(num_employees, total_days_absent);
    cout << endl;

    cout << "num_employees = " 
         << num_employees 
         << endl;

    cout << "total_days_absent = " 
         << total_days_absent 
         << endl;

    cout << "avg_days_absent = " 
         << avg_days_absent 
         << '\n' << endl;

    return 0;
}

/********************************************************
 * function definition for numEmployees():              *
 * This function asks the user for the number of        * 
 * employees in the company. This value should be       *
 * returned as an int. (The function accepts no         *
 * arguments.)                                          *
 ********************************************************/
int numEmployees()
{
    int num;

    cout << "Enter the number of employees in\n"
         << "the company: ";
         
    return inputValidate(num, 1);
}

/********************************************************
 * function definition for daysAbsent():                *
 * This function accepts one argument: the number of    *
 * employees in the company. The function should ask the* 
 * user to enter the number of days each employee missed*
 * during the past year. The total of these days should *
 * be returned as an int.                               *
 ********************************************************/
int daysAbsent(int num_employees)
{
    int total_employees = 0;

    cout << "Enter number of days each employee missed\n"
         << "during the past year: " 
         << endl;

    for (int i = 0; i < num_employees; i++)
    {
        cout << "Employee #" << (i + 1) << ": ";
        total_employees += inputValidate(total_employees, 0);
    }

    return total_employees;
}

/********************************************************
 * function definition for avgDaysAbsent()              *
 * This function takes two arguments: the number of     *
 * employees in the company and the total number of     *
 * days absent for all employees during the year. The   *
 * function should return, as a double, the average     *
 * number of days absent. (This function does not       *
 * perform screen output and does not ask the user for  *
 * input.)                                              *
 ********************************************************/
double avgDaysAbsent(int num_employees, int days_absent)
{
    return days_absent / static_cast<double>(num_employees);
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a int        *
 * less than 1. If a int less than 1                *
 * is not found, a while loop displays an error,    *
 * clears and ignores previous input, and prompts   *
 * the user to try again.                           *
 ****************************************************/
int inputValidate(int num1, int num2)
{
    
    while(!(cin >> num1) || num1 < num2)
    {
        cout << "Error. Integer must not be "
             << " less than " << num2 << ": ";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
}