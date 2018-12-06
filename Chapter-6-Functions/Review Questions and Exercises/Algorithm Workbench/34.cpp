/********************************************************************
*
*	  34. A program contains the following function.
*
*           int cube(int num) 
*           {
*               return num * num * num; 
*           }
*
*         Write a statement that passes the value 4 to this 
*         function and assigns its return value to the variable 
*         result.
*
* 	Jesus Hilario Hernandez
* 	December 3, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int cube(int num) 
{
    return num * num * num; 
}

int main()
{
    double result;
           
    result = cube(4); // <-- ANSWER!

    cout << result << endl;
    return 0;
}

