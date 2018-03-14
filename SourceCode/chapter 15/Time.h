// Specification file for the Time class
#ifndef TIME_H
#define TIME_H

class Time
{
protected:
   int hour;
   int min;
   int sec;
public:
   // Default constructor
   Time() 
      { hour = 0; min = 0; sec = 0; }
   
   // Constructor
   Time(int h, int m, int s) 
      { hour = h; min = m; sec = s; }

   // Accessor functions
   int getHour() const
      { return hour; }

   int getMin() const
      { return min; }

   int getSec() const
      { return sec; }
};
#endif