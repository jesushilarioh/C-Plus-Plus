#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
private:
   int numQuestions;    // Number of questions
   double pointsEach;   // Points for each question
   int numMissed;       // Number of questions missed
public:
   // Default constructor
   FinalExam()
      { numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0; }
        
   // Constructor
   FinalExam(int questions, int missed)
      { set(questions, missed); }
   
   // Mutator function
   void set(int, int);  // Defined in FinalExam.cpp

   // Accessor functions
   double getNumQuestions() const
      { return numQuestions; }
      
   double getPointsEach() const
      { return pointsEach; }
   
   int getNumMissed() const
      { return numMissed; }
};
#endif 