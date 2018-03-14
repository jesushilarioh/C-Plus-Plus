// Implementation file for the DateTime class
#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;

//************************************************
// Default constructor                           *
// Note that this constructor does nothing other *
// than call default base class constructors.    *
//************************************************
DateTime::DateTime() : Date(), Time()
{ }

//************************************************
// Constructor                                   *
// Note that this constructor does nothing other *
// than call base class constructors.            *
//************************************************
DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc) :
    Date(dy, mon, yr), Time(hr, mt, sc)
{ }

//************************************************
// The showDateTime member function displays the *
// date and the time.                            *
//************************************************
void DateTime::showDateTime() const
{
   // Display the date in the form MM/DD/YYYY.
   cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";

   // Display the time in the form HH:MM:SS.
   cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
}