/********************************************************************
*
*	  35. Write a function named timesTen that accepts an argument. 
*         When the function is called, it should display the 
*         product of its argument multiplied times 10.
*
* 	Jesus Hilario Hernandez
* 	December 3, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

void timesTen(double num) 
{
    cout << num * 10 << endl;
}

int main()
{
    timesTen(29);
    return 0;
}

