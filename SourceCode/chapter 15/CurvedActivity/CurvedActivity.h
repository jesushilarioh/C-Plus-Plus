#ifndef CURVEDACTIVITY_H
#define CURVEDACTIVITY_H
#include "GradedActivity.h"

class CurvedActivity : public GradedActivity
{
protected:
   double rawScore;     // Unadjusted score
   double percentage;   // Curve percentage
public:
   // Default constructor
   CurvedActivity() : GradedActivity()
      { rawScore = 0.0; percentage = 0.0; }

   // Mutator functions
   void setScore(double s) 
      { rawScore = s;
        GradedActivity::setScore(rawScore * percentage); }

   void setPercentage(double c)
      { percentage = c; }

   // Accessor funtions
   double getPercentage() const
      { return percentage; }

   double getRawScore() const
      { return rawScore; }
};
#endif 