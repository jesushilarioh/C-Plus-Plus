// Specification file for the DateTime class
#ifndef DATETIME_H
#define DATETIME_H
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

class DateTime : public Date, public Time
{
public:
   // Default constructor
   DateTime();
   
   // Constructor
   DateTime(int, int, int, int, int, int);

   // The showDateTime function displays the
   // date and the time.
   void showDateTime() const;
};
#endif