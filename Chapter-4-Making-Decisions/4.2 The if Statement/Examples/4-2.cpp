//*****************************************
// This program averages three test scores
//
// By: Jesus Hilario Hernandez
// Last Updated: December 15, 2016
//******************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int HIGH_SCORE = 95;  // A high score is 95 of greater
    int score1, score2, score3; // To hold three test scores
    double average;             // TO hold the average scores

    // Get the three test scores.
    cout << "Enter 3 test scores and I will average the: ";
    // Error Check
    while (!(cin >> score1 >> score2 >> score3))
    {
        // Explain Error
        cout << "ERROR: three numbers must be entered: ";
        // Clear previous input
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }

    // Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // If the average is a high score, congratulat the user.
    if (average > HIGH_SCORE)
    {
        cout << "Congratulations! That's a high score!\n";
    }

    return 0;
}
