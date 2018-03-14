/********************************************************************
*
*	Checkpoint 4.22
*
*       Indicate whether each of the following relational expressions
*       is true or false. Refer to the ASCII table in Appendix B if
*       necessary.
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

    // A). 'a' == 97, 'z' == 122
    cout << "'a' < 'z'  --> " << ('a' < 'z')  << endl; // 1

    // B). 'a' == 97, 'A' == 65
    cout << "'a' == 'A' --> " << ('a' == 'A') << endl; // 0

    // C). 5 == 53, 7 == 55
    cout << "'5' < '7'  --> " << ('5' < '7')  << endl; // 1

    // D). 'a' == 97, 'A' == 65
    cout << "'a' < 'A'  --> " << ('a' < 'A')  << endl; // 0

    // E). '1' == 49, 1 == 1
    cout << "'1' == 1   --> " << ('1' == 1)   << endl; // 0

    // F). '1' == 49, 49 == 49
    cout << "'1' == 49  --> " << ('1' == 49)  << endl; // 1


    cout << endl;

    // Output:

    // 'a' < 'z'  --> 1
    // 'a' == 'A' --> 0
    // '5' < '7'  --> 1
    // 'a' < 'A'  --> 0
    // '1' == 1   --> 0
    // '1' == 49  --> 1

    // Terminate Program
    return 0;
}
