/********************************************************************
*
*	Checkpoint 4.10
*
*       The following code segment is syntactically correct, but it
*       appears to contain a logic error. Can you find the error?
*
*       // Answer: missing curly braces. See updated answer @ Line 30
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    float interestRate = .87,
          balance = 78.89;
          
    // The if statement

    // (ORIGINAL)
    // if (interestRate > .07)
    //     cout << "This account earns a $10 bonus.\n";
    //     balance += 10.0;

    // (UPDATED)
    if (interestRate > .07)
    {
        cout << "This account earns a $10 bonus.\n";
        balance += 10.0;
    }

    // Terminate Program
    return 0;
}
