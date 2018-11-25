/********************************************************************
*
*	  6.8 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	November 24th 2018
*
********************************************************************/
#include <iostream> 
using namespace std;

void showDouble(int); // Function prototype

int main() 
{
    int num;

    for (num = 0; num < 10; num++) 
        showDouble(num);
    return 0; 
}

// Definition of function showDouble. 
void showDouble(int value)
{
    cout << value << "\t" << (value * 2) << endl; 
}

/********************************************************************
*
*	  ANSWER: 
*       0   0
*       1	2
*       2	4
*       3	6
*       4	8
*       5	10
*       6	12
*       7	14
*       8	16
*       9	18
*
********************************************************************/