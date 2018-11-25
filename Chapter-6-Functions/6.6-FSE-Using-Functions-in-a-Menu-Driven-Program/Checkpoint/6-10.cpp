/********************************************************************
*
*	  6.10 The following program skeleton asks for the number of 
*          hours you’ve worked and your hourly pay rate. It then 
*          calculates and displays your wages. The function 
*          showDollars, which you are to write, formats the output 
*          of the wages.
*
* 	Jesus Hilario Hernandez
* 	November 24th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void showDollars(double);   // Function prototype

int main()
{
    double payRate, hoursWorked, wages;

    cout << "How many hours have you worked? ";
    cin >> hoursWorked;
    cout << "What is your hourly pay rate? "; 
    cin >> payRate;
    wages = hoursWorked * payRate; 
    showDollars(wages);
    return 0;
}

// You must write the definition of the function showDollars
// here. It should take one parameter of the type double.
// The function should display the message "Your wages are $"
// followed by the value of the parameter. It should be displayed 
// with 2 places of precision after the decimal point, in fixed 
// notation, and the decimal point should always display.
void showDollars(double num)
{
    cout << "Your wages are $";
    cout << setprecision(2) << fixed;
    cout << num << endl;
}