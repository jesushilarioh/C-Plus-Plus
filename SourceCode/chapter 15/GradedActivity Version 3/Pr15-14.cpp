#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

// Function prototype
void displayGrade(const GradedActivity *);

int main()
{
   // Constant for the size of an array.
   const int NUM_TESTS = 4;
   
   // tests is an array of GradedActivity pointers.
   // Each element of tests is initialized with the
   // address of a dynamically allocated object.
   GradedActivity *tests[NUM_TESTS] =
      { new GradedActivity(88.0),
        new PassFailExam(100, 25, 70.0),
        new GradedActivity(67.0),
        new PassFailExam(50, 12, 60.0)
      };

   // Display the grade data for each element in the array.
   for (int count = 0; count < NUM_TESTS; count++)
   {
      cout << "Test #" << (count + 1) << ":\n";
      displayGrade(tests[count]);
      cout << endl;
   }
   return 0;
}

//***************************************************************
// The displayGrade function displays a GradedActivity object's *
// numeric score and letter grade. This version of the function *
// uses a GradedActivity pointer as its parameter.              *
//***************************************************************

void displayGrade(const GradedActivity *activity)
{
   cout << setprecision(1) << fixed;
   cout << "The activity's numeric score is "
        << activity->getScore() << endl;
   cout << "The activity's letter grade is "
        << activity->getLetterGrade() << endl;
} 