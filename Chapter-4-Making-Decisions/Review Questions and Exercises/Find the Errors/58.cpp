/********************************************************************
*
*	58. The following program has errors. Find as many as you can.
*       // This program averages 3 test scores.
*       //It uses the variable perfectScore as a flag. include <iostream>
*       using namespace std;
*
*       int main()
*       {
*           cout << "Enter your 3 test scores and I will ";
*                << "average them:";
*           int score1, score2, score3,
*           cin >> score1 >> score2 >> score3;
*           double average;
*           average = (score1 + score2 + score3) / 3.0;
*           if (average = 100);
*               perfectScore = true; // Set the flag variable
*           cout << "Your average is " << average << endl;
*           bool perfectScore;
*           if (perfectScore);
*           {
*               cout << "Congratulations!\n";
*               cout << "That's a perfect score.\n";
*               cout << "You deserve a pat on the back!\n"; return 0;
*       }
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your 3 test scores and I will ";
    cout << "average them:";

    // Variables
    int score1, score2, score3;

    // Receive user input for scores
    cin >> score1 >> score2 >> score3;

    // Variable
    double average;

    // Calculate
    average = (score1 + score2 + score3) / 3.0;

    // decision structure
    if (average == 100)
    {
        bool perfectScore = true;    // Set the flag variable
        cout << "Your average is " << average << endl;

        // Nested decision structure (if)
        if (perfectScore)
        {
            cout << "Congratulations!\n";
            cout << "That's a perfect score.\n";
            cout << "You deserve a pat on the back!\n";
        }

    }

    // Terminate program
    return 0;
}
