/********************************************************************
*
*	34. What will the following program display? (Some should be
*       traced and require a calculator.)
*
* 	Jesus Hilario Hernandez
* 	January 6th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double salary, monthly;
    cout << endl;
    cout << "What is your annual salary? ";
    cin >> salary;
    monthly = static_cast<int>(salary) / 12;
    cout << "Your monthly wages are " << monthly << endl;
    cout << endl;
    return 0;
}
