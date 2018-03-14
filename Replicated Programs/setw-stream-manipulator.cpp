//This program displays three rows of numbers.
//setw() stream manipulator practice and notice

//JESUS HILARIO HERNANDEZ

//Last modified: 9/27/2016

#include <iostream>     //for input output
#include <iomanip>      //  REQUIRED FOR setw() stream manipulator
using namespace std;

int main()
{
    int num1 = 2897,  num2 = 5,    num3 = 837,
        num4 = 34,    num5 = 7,    num6 = 1623,
        num7 = 390,   num8 = 3456, num9 = 12;

    //Display the first row of numbers
    cout << setw(6) << num1
         << setw(6) << num2
         << setw(6) << num3
         << endl;

    //Display the second row of numbers
    cout << setw(6) << num4
         << setw(6) << num5
         << setw(6) << num6
         << endl;

    //Display the third row of numbers
    cout << setw(6) << num7
         << setw(6) << num8
         << setw(6) << num9
         << endl;

    int intValue = 3928;
    double doubleValue = 91.5;
    //This name is larger than setw(16), thus cout
    // will overide the setw value refer to line 43.
    string stringValue = "Jesus H. Hernandez";

    cout << "(" << setw(5) << intValue << ")" << endl;  //setw(5)
    cout << "(" << setw(8) << doubleValue << ")" << endl;  //setw(8)
    cout << "(" << setw(16) << stringValue << ")" << endl;  //setw(16)

    return 0;
}
