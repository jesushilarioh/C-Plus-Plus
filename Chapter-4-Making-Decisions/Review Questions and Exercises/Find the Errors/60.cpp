/********************************************************************
*
*	60. The following program has errors. Find as many as you can.
*       // This program uses an if/else if statement to assign a
*       // letter grade (A, B, C, D, or F) to a numeric test score.
*       #include <iostream>
*       using namespace std;
*
*       int main()
*       {
*           int testScore;
*           cout << "Enter your test score and I will tell you\n";
*           cout << "the letter grade you earned: ";
*           cin >> testScore;
*           if (testScore < 60)
*               cout << "Your grade is F.\n";
*           else if (testScore < 70)
*               cout << "Your grade is D.\n";
*           else if (testScore < 80)
*               cout << "Your grade is C.\n";
*           else if (testScore < 90)
*               cout << "Your grade is B.\n";
*           else
*               cout << "That is not a valid score.\n";
*           else if (testScore <= 100)
*               cout << "Your grade is A.\n";
*           return 0;
*       }
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int testScore;

    // Ask user for test scores
    cout << "Enter your test score and I will tell you\n";
    cout << "the letter grade you earned: ";
    cin >> testScore;

    // Decision structure (if / else if)
    if (testScore < 60)
        cout << "Your grade is F.\n";
    else if (testScore < 70)
        cout << "Your grade is D.\n";
    else if (testScore < 80)
        cout << "Your grade is C.\n";
    else if (testScore < 90)
        cout << "Your grade is B.\n";
    else if (testScore <= 100)
        cout << "Your grade is A.\n";
    else
        cout << "That is not a valid score.\n";


    // Terminate program
    return 0;
}
