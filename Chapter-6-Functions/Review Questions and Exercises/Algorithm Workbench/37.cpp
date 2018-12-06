/********************************************************************
*
*	  36.   
*           Write a function named getNumber that uses a reference 
*           parameter variable to accept an integer argument. The 
*           function should prompt the user to enter a number in the 
*           range of 1 through 100. The input should be validated and 
*           stored in the parameter variable.
*
* 	Jesus Hilario Hernandez
* 	December 3, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

void getNumber(int &num)
{
    cout << num << endl;
    cout << "Enter a number in the range of 1 through 100: ";
    while(!(cin >> num) || (num < 1 || num > 100))
    {
        cout << "Error. Enter a number in the range of 1 "
             << "through 100: ";

        cin.clear();

        cin.ignore(1000, '\n');
    }
    cout << num << endl;
}

int main()
{
    int number = 25;
    cout << number << endl;
    getNumber(number);
    cout << number << endl;
    return 0;
}

