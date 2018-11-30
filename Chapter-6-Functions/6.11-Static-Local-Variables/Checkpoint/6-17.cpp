/************************************************************
*
*   6.17 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	November 29th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

void myFunc();  // Function prototype

int main()
{
    int var = 100;

    cout << var << endl;
    myFunc();
    cout << var << endl;

    return 0;
}

// Definition of function myFunc
void myFunc()
{
    int var = 50;

    cout << var << endl;
}

// OUTPUT:
// 100
// 50
// 100