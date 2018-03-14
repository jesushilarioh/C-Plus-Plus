// Specification file for the Date class
#ifndef DATE_H
#define DATE_H

class Date
{
protected:
   int day;
   int month;
   int year;
public:
   // Default constructor
   Date() 
      { day = 1; month = 1; year = 1900; }

   // Constructor 
   Date(int d, int m, int y) 
      { day = d; month = m; year = y; }

   // Accessors
   int getDay() const 
      { return day; }

   int getMonth() const
      { return month; }

   int getYear() const
      { return year; }
};
#endif