/************************************************************
*
*   6.18 What is the output of the following program?       
*
* 	Jesus Hilario Hernandez
* 	November 29th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

void showVar(); // Function prototype

int main()
{
    for (int count = 0; count < 10; count++)
        showVar();
    
    return 0;
}

// Definition of function showVar
void showVar()
{
    static int var = 10;

    cout << var << endl;
    var++;
}

// OUTPUT:
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19