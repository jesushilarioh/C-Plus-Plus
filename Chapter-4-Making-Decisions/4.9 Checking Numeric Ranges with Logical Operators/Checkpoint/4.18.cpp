/********************************************************************
*
*	Checkpoint 4.18
*
*       The following truth table shows various combinations of the
*       values true and false connected by a logical operator. Complete
*       the table by indicating if the result of such a combination is
*       TRUE or FALSE.
*
*
*          ***************************************************
*               Logical Expression     Result(true or false)
*          ***************************************************
*               true && false          0
*               true && true           1
*               false && true          0
*               false && false         0
*               true || false          1
*               true || true           1
*               false || true          1
*               false || false         0
*               !true                  0
*               !false                 1
*          ****************************************************
*
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "true && false  --> " << (true && false)  << endl;
    cout << "true && true   --> " << (true && true)   << endl;
    cout << "false && true  --> " << (false && true)  << endl;
    cout << "false && false --> " << (false && false) << endl;
    cout << "true || false  --> " << (true || false)  << endl;
    cout << "true || true   --> " << (true || true)   << endl;
    cout << "false || true  --> " << (false || true)  << endl;
    cout << "false || false --> " << (false || false) << endl;
    cout << "!true          --> " << (!true)          << endl;
    cout << "!false         --> " << (!false)         << endl;
    cout << endl;

    // Output:
    
    // true && false  --> 0
    // true && true   --> 1
    // false && true  --> 0
    // false && false --> 0
    // true || false  --> 1
    // true || true   --> 1
    // false || true  --> 1
    // false || false --> 0
    // !true          --> 0
    // !false         --> 1

    // Terminate Program
    return 0;
}
