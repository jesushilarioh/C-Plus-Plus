// Specification file for the CsStudent class
#ifndef CSSTUDENT_H
#define CSSTUDENT_H
#include "Student.h"

// Constants for required hours
const int MATH_HOURS = 20;   // Math hours
const int CS_HOURS = 40;     // Computer science hours
const int GEN_ED_HOURS = 60; // General Ed hours

class CsStudent : public Student
{
private:
   int mathHours;    // Hours of math taken
   int csHours;      // Hours of Computer Science taken
   int genEdHours;   // Hours of general education taken
   
public:
   // Default Constructor
   CsStudent() : Student()
      { mathHours = 0;
        csHours = 0;
        genEdHours = 0; }
   
   // Constructor
   CsStudent(string n, string id, int year) :
      Student(n, id, year)
      { mathHours = 0;
        csHours = 0;
        genEdHours = 0; }
   
   // Mutator functions
   void setMathHours(int mh)
      { mathHours = mh; }

   void setCsHours(int csh)
      { csHours = csh; }

   void setGenEdHours(int geh)
      { genEdHours = geh; }

   // Overridden getRemainingHours function,
   // defined in CsStudent.cpp
   virtual int getRemainingHours() const;
};
#endif