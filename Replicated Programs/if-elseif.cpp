// This program illustrates the use of the if / else if statement.

// JESUS HILARIO HERNANDEZ

#include <iostream>
using namespace std;


int main()
{
    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    //For grades A-D, output YOU PASSED!
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
        cout << "YOU PASSED!" << endl;


    if(grade == 'A') //grade == A
        cout << "an A - excellent work !" << endl;

    else if(grade == 'B') //grade == B
        cout << "you got a B - good job" << endl;

    else if(grade == 'C') //grade == C
        cout << "earning a C is satisfactory" << endl;

    else if(grade == 'D') //grade == D
        cout << "while  D is passing, there is a problem" << endl;

    else if(grade == 'F') //grade == F
        cout << "you failed - better luck next time" << endl;

    else //Invalid Input
        cout << "You did not enter an A, B, C, D, or F" << endl;

    return 0;
}
