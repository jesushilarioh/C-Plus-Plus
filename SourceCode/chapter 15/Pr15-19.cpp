// This program demonstrates the CsStudent class, which is
// derived from the abstract base class, Student.
#include <iostream>
#include "CsStudent.h"
using namespace std;

int main()
{
   // Create a CsStudent object for a student.
   CsStudent student("Jennifer Haynes", "167W98337", 2006);
   
   // Store values for Math, Computer Science, and General
   // Ed hours.
   student.setMathHours(12);  // Student has taken 12 Math hours
   student.setCsHours(20);    // Studeht has taken 20 CS hours
   student.setGenEdHours(40); // Student has taken 40 Gen Ed hours
   
   // Display the number of remaining hours.
   cout << "The student " << student.getName()
        << " needs to take " << student.getRemainingHours()
        << " more hours to graduate.\n";
        
   return 0;
}