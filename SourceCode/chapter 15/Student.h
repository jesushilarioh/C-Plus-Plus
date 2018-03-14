// Specification file for the Student class
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
protected:
   string name;			// Student name
   string idNumber;		// Student ID
   int yearAdmitted;	// Year student was admitted
public:
   // Default constructor
   Student()
      { name = "";
        idNumber = "";
        yearAdmitted = 0; }
   
   // Constructor
   Student(string n, string id, int year)
   { set(n, id, year); }

   // The set function sets the attribute data.
   void set(string n, string id, int year)
      { name = n;				// Assign the name
        idNumber = id;			// Assign the ID number
        yearAdmitted = year; }  // Assign year admitted

   // Accessor functions
   const string getName() const
      { return name; }
   
   const string getIdNum() const
      { return idNumber; }
      
   int getYearAdmitted() const
      { return yearAdmitted; }
      
   // Pure virtual function
   virtual int getRemainingHours() const = 0; 
};
#endif 