/********************************************************************
*
*	Checkpoint 4.23
*
*       Indicate whether each of the following relational expressions is
*       true or false. Refer to the ASCII table in Appendix B.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    string Bill = "Bill",
           BILL = "BILL",
           Bob  = "Bob",
           Mary = "Mary",
           MaryEllen = "MaryEllen",
           Mary_Ellen = "Mary Ellen",
           num_189 = "189",
           num_23  = "23";

    // The problem
    cout << endl;
    cout << "\"Bill\" == \"BILL\"           --> " << (Bill == BILL)  << endl;
    cout << "\"Bill\" < \"BIll\"            --> " << (Bill < BILL) << endl;
    cout << "\"Bill\" < \"Bob\"             --> " << (Bill < Bob)  << endl;
    cout << "\"189\" > \"23\"               --> " << (num_189 > num_23)  << endl;
    cout << "\"189\" > \"Bill\"             --> " << (num_189 > Bill)   << endl;
    cout << "\"Mary\" < \"MaryEllen\"       --> " << (Mary < MaryEllen)  << endl;
    cout << "\"MaryEllen\" < \"Mary Ellen\" --> " << (MaryEllen < Mary_Ellen)  << endl;
    cout << endl;

    // Output:

    // "Bill" == "BILL"           --> 0
    // "Bill" < "BIll"            --> 0
    // "Bill" < "Bob"             --> 1
    // "189" > "23"               --> 0
    // "189" > "Bill"             --> 0
    // "Mary" < "MaryEllen"       --> 1
    // "MaryEllen" < "Mary Ellen" --> 0

    // Terminate Program
    return 0;
}
