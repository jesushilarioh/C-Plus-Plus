// This program averages three test scores

//JESUS HILARIO HERNANDEZ

//Last modified: 9/27/2016

#include <iostream>       //for input output
#include <iomanip>        //for formatting output
using namespace std;

int main()
{
    const int HIGH_SCORE = 95;     //A high score is 95 or greater
    int score1, score2, score3;      //To hold three test scores
    double average;                 //to hold the average score

    //Get three test scores from user.
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    //Calcuate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1); //formatting statement
    cout << "Your average is " << average << endl;

    //If the average is a high score, the user is congratulated
    if(average > HIGH_SCORE)
        cout << "Congratulations! That's a high score!\n";

    return 0;
}
