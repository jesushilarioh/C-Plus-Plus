/********************************************************************
*
*	  36. A program contains the following function.
*
*         void display(int arg1, double arg2, char arg3) 
*         {
*             cout << "Here are the values: "
*                  << arg1 << " " << arg2 << " " 
*                  << arg3 << endl;
*         }
*
*         Write a statement that calls the procedure and passes 
*         the following variables to it:
*       
*         int age; 
*         double income; 
*         char initial;
*
* 	Jesus Hilario Hernandez
* 	December 3, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

void display(int arg1, double arg2, char arg3) 
{
    cout << "Here are the values: "
         << arg1 << " " << arg2 << " " 
         << arg3 << endl;
}

int main()
{
    int age;
    double income;
    char initial;

    display(age, income, initial);
    
    return 0;
}

