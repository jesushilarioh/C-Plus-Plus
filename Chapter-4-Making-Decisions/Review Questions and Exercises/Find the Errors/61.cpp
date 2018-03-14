/********************************************************************
*
*	61. The following program has errors. Find as many as you can.
*       // This program uses a switch-case statement to assign a
*       // letter grade (A, B, C, D, or F) to a numeric test score.
*       #include <iostream>
*       using namespace std;
*
*       int main() {

*           double testScore;
*           cout << "Enter your test score and I will tell you\n";
*           cout << "the letter grade you earned: ";
*           cin >> testScore;
*           switch (testScore)
*           {
*               case (testScore < 60.0):
*                   cout << "Your grade is F.\n";
*                   break;
*               case (testScore < 70.0):
*                   cout << "Your grade is D.\n";
*                   break;
*               case (testScore < 80.0):
*                   cout << "Your grade is C.\n";
*                   break;
*               case (testScore < 90.0):
*                   cout << "Your grade is B.\n";
*                   break;
*               case (testScore <= 100.0):
*                   cout << "Your grade is A.\n";
*                   break;
*               default:
*                   cout << "That score isn't valid\n";
*           return 0;
*       }
*
*       SWITCH WILL NOT WORK WITH
*       RELATIONAL EXPRESSIONS
*       RELATIONAL EXPRESSIONS
*       RELATIONAL EXPRESSIONS
*
*       (e.g.
*           x > y,
*           x < y,
*           x >= y,
*           x <= y,
*           x == y,
*           x != y
        )
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    double testScore;

    // Ask user for input
    cout << "Enter your test score and I will tell you\n";
    cout << "the letter grade you earned: ";

    // Receive input
    cin >> testScore;

    // Decision structure (if statement)
    if (testScore < 60.0)
        cout << "Your grade is F.\n";
    else if (testScore < 70.0)
        cout << "Your grade is D.\n";
    else if (testScore < 80.0)
        cout << "Your grade is C.\n";
    else if (testScore < 90.0)
        cout << "Your grade is B.\n";
    else if (testScore <= 100.0)
        cout << "Your grade is A.\n";
    else
        cout << "That score isn't valid\n";

    // Terminate program
    return 0;
}
