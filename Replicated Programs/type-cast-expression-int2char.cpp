//This program uses a type cast expression
// to print a character from a number.

//JESUS HILARIO HERNANDEZ

//Last modified: 9/27/2016

#include <iostream>       //for input output

using namespace std;

int main()
{
    int number = 65;

    //Display the value of the number variable
    cout << number << endl;

    //DIsplay the value of number converted to
    //The char data type.
    cout << static_cast<char>(number) << endl; //the asci character for 65 is A

    return 0;
}
