/********************************************************************
*
*	07. ASSUME THE FOLLOWING PROGRAM HAS THE FOLLOWING VARIABLE
*       DEFINITIONS:
*
*       int a, b = 2;
*       float c = 4.2;
*
*       AND THE FOLLOWING STATEMENT:
*       a = b * c;
*
*       WHAT VALUE WILL BE STORED IN a?
*       A) 8.4
*       B) 8 <<<<<---
*       C) 0
*       D) None of the above
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b = 2;
    float c = 4.2;

    a = b * c;

    cout << endl << "a = " << a << endl << endl;

    return 0;
}
