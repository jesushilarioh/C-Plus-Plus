/********************************************************************
*
*	Checkpoint 4.27
*
*       Explain why you cannot convert the following if/else if
*       statement into a switch statement.
*
*       Answer: A case statement cannot contain a relational
*               expression/boolean expression. It must be a
*               constant expression.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    if (temp == 100)
        x = 0;
    else if (population > 1000)
        x = 1;
    else if (rate < .1)
        x = -1;

    // Terminate program
    return 0;
}
