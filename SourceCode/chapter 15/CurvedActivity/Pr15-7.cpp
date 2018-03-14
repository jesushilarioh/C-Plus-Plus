// This program demonstrates a class that redefines
// a base class function.
#include <iostream>
#include <iomanip>
#include "CurvedActivity.h"
using namespace std;

int main()
{
   double numericScore;  // To hold the numeric score
   double percentage;    // To hold curve percentage

   // Define a CurvedActivity object.
   CurvedActivity exam;

   // Get the unadjusted score.
   cout << "Enter the student's raw numeric score: ";
   cin >> numericScore;

   // Get the curve percentage.
   cout << "Enter the curve percentage for this student: ";
   cin >> percentage;

   // Send the values to the exam object.
   exam.setPercentage(percentage);
   exam.setScore(numericScore);

   // Display the grade data.
   cout << fixed << setprecision(2);
   cout << "The raw score is " 
        << exam.getRawScore() << endl;
   cout << "The curved score is " 
        << exam.getScore() << endl;
   cout << "The curved grade is " 
        << exam.getLetterGrade() << endl;

   return 0;
}