// This program averages 3 test scores. The braces
// were inadvertently left out of the if statement.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int score1, score2, score3;  // To hold three test scores
   double average;              // TO hold the average score

   // Get the three test scores.
   cout << "Enter 3 test scores and I will average them: ";
   cin >> score1 >> score2 >> score3;
   
   // Calculate and display the average score.
   average = (score1 + score2 + score3) / 3.0;
   cout << fixed << showpoint << setprecision(1);
   cout << "Your average is " << average << endl;

   // ERROR! This if statement is missing its braces!
   if (average > 95)
      cout << "Congratulations!\n";
      cout << "That's a high score.\n";
      cout << "You deserve a pat on the back!\n";
   return 0;
} 