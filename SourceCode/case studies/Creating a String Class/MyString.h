// Specification file for the MyString class
#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;

class MyString;   // Forward declaration.
ostream &operator<<(ostream &, const MyString &);
istream &operator>>(istream &, MyString &);

// MyString class. An abstract data type for handling strings.

class MyString
{
private:
   char *str;
   int len;
public:
   // Default constructor
   MyString()
      { str = '\0'; len = 0; }

   // Copy constructor
   MyString(MyString &right)
      { str = new char[right.length() + 1];
        strcpy(str, right.getValue());
        len = right.length(); }

   // The following constructor initializes the
   // MyString object with a C-string
   MyString(char *sptr)
      { len = strlen(sptr);
        str = new char[len + 1];
        strcpy(str, sptr); }
        
    // Destructor
   ~MyString()
      { if (len != 0) delete [] str; }
   
   // The length function returns the string length.
   int length() const
      { return len; }
   
   // The getValue function returns the string.
   const char *getValue() const
      { return str; };
   
   // Overloaded operators
   const MyString operator+=(MyString &);
   const char *operator+=(const char *);
   const MyString operator=(MyString &);
   const char *operator=(const char *);
   int operator==(MyString &);
   int operator==(const char *);
   int operator!=(MyString &);
   int operator!=(const char *);
   bool operator>(MyString &);
   bool operator>(const char *);
   bool operator<(MyString &);
   bool operator<(const char *); 
   bool operator>=(MyString &);
   bool operator>=(const char*);
   bool operator<=(MyString &);
   bool operator<=(const char *);
   
   // Friends
   friend ostream &operator<<(ostream &, const MyString &);
   friend istream &operator>>(istream &, MyString &);
};

#endif