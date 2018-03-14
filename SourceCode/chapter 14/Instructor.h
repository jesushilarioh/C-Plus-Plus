#ifndef INSTRUCTOR
#define INSTRUCTOR
#include <iostream>
#include <string>
using namespace std;

// Instructor class
class Instructor
{
private:
   string lastName;		// Last name
   string firstName;    // First name
   string officeNumber; // Office number
public:
   // The default constructor stores empty strings
   // in the string objects.
   Instructor()
      { set("", "", ""); }

   // Constructor
   Instructor(string lname, string fname, string office)
      { set(lname, fname, office); }
        
   // set function
   void set(string lname, string fname, string office)
      { lastName = lname;
        firstName = fname;
        officeNumber = office; }

   // print function
   void print() const
      {  cout << "Last name: " << lastName << endl;
         cout << "First name: " << firstName << endl;
         cout << "Office number: " << officeNumber << endl; }
};
#endif 