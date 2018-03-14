// Implementation file for the MyString class
#include <cstring>  // For string library functions
#include "MyString.h"
using namespace std;

//*************************************************
// Overloaded = operator. Called when operand     *
// on the right is another MyString object.       *
// Returns the calling object.                    *
//*************************************************

const MyString MyString::operator=(MyString &right)
{
   if (len != 0)
      delete [] str;
   str = new char[right.length() + 1];
   strcpy(str, right.getValue());
   len = right.length();
   return *this;
}

//*************************************************
// Overloaded = operator. Called when operand     *
// on the right is a C-string.                    *
// Returns the str member of the calling object.  *
//*************************************************

const char *MyString::operator=(const char *right)
{
   if (len != 0)
      delete [] str;
   len = strlen(right);
   str = new char[len + 1];
   strcpy(str, right);
   return str;
}

//*************************************************
// Overloaded += operator. Called when operand    *
// on the right is another MyString object.       *
// Concatenates the str member of right to the    *
// str member of the calling object.              *
// Returns the calling object.                    *
//*************************************************

const MyString MyString::operator+=(MyString &right)
{
   char *temp = str;

   str = new char[strlen(str) + right.length() + 1];
   strcpy(str, temp);
   strcat(str, right.getValue());
   if (len != 0)
         delete [] temp;
   len = strlen(str);
   return *this;
}

//*************************************************
// Overloaded += operator. Called when operand    *
// on the right is a string. Concatenates the     *
// str member of right to the str member of       *
// the calling object.                            *
// Returns the str member of the calling object.  *
//*************************************************

const char *MyString::operator+=(const char *right)
{
   char *temp = str;

   str = new char[strlen(str) + strlen(right) + 1];
   strcpy(str, temp);
   strcat(str, right);
   if (len != 0)
         delete [] temp;
   return str;
}

//*****************************************************
// Overloaded == operator.                            *
// Called when the operand on the right is a MyString *
// object. Returns 1 if right.str is the same as str. *
//*****************************************************

int MyString::operator==(MyString &right)
{
   return !strcmp(str, right.getValue());
}

//****************************************************
// Overloaded == operator.                           *
// Called when the operand on the right is a string. *
// Returns 1 if right is the same as str.            *
//****************************************************

int MyString::operator==(const char *right)
{
   return !strcmp(str, right);
}

//*********************************************************
// Overloaded != operator.                                *
// Called when the operand on the right is a MyString     *
// object. Returns true if right.str is not equal to str. *
//*********************************************************

int MyString::operator!=(MyString &right)
{
   return strcmp(str, right.getValue());
}

//****************************************************
// Overloaded != operator.                           *
// Called when the operand on the right is a string. *
// Returns true if right is not equal to str.        *
//****************************************************

int MyString::operator!=(const char *right)
{
   return strcmp(str, right);
}

//*********************************************************
// Overloaded > operator.                                 *
// Called when the operand on the right is a MyString     *
// object. Returns true if str is greater than right.str. *
//*********************************************************

bool MyString::operator>(MyString &right)
{
   bool status;

   if (strcmp(str, right.getValue()) > 0)
      status = true;
   else
      status = false;
   return status;
}

//****************************************************
// Overloaded > operator.                            *
// Called when the operand on the right is a string. *
// Returns true if str is greater than right.        *
//****************************************************

bool MyString::operator>(const char *right)
{
   bool status;

   if (strcmp(str, right) > 0)
      status = true;
   else
      status = false;
   return status;
}

//******************************************************
// Overloaded < operator.                              *
// Called when the operand on the right is a MyString  *
// object. Returns true if str is less than right.str. *
//******************************************************

bool MyString::operator<(MyString &right)
{
   bool status;

   if (strcmp(str, right.getValue()) < 0)
      status = true;
   else
      status = false;
   return status;
}

//****************************************************
// Overloaded < operator.                            *
// Called when the operand on the right is a string. *
// Returns true if str is less than right.           *
//****************************************************

bool MyString::operator<(const char *right)
{
   bool status;

   if (strcmp(str, right) < 0)
      status = true;
   else
      status = false;
   return status;
}

//*****************************************************
// Overloaded >= operator.                            *
// Called when the operand on the right is a MyString *
// object. Returns true if str is greater than or     *
// equal to right.str                                 *
//*****************************************************

bool MyString::operator>=(MyString &right)
{
   bool status;

   if (strcmp(str, right.getValue()) >= 0)
      status = true;
   else
      status = false;
   return status;
}

//*********************************************************
// Overloaded >= operator.                                *
// Called when the operand on the right is a string.      *
// Returns true if str is greater than or equal to right. *
//*********************************************************

bool MyString::operator>=(const char *right)
{
   bool status;

   if (strcmp(str, right) >= 0)
      status = true;
   else
      status = false;
   return status;
}

//**********************************************************
// Overloaded <= operator.                                 *
// Called when the operand on the right is a MyString      *
// object. Returns true if right.str is less than or equal *
// to right.str.                                           *
//**********************************************************

bool MyString::operator<=(MyString &right)
{
   bool status;

   if (strcmp(str, right.getValue()) <= 0)
      status = true;
   else
      status = false;
   return status;
}

//******************************************************
// Overloaded <= operator.                             *
// Called when the operand on the right is a string.   *
// Returns true if str is less than or equal to right. *
//******************************************************

bool MyString::operator<=(const char *right)
{
   bool status;

   if (strcmp(str, right) <= 0)
      status = true;
   else
      status = false;
   return status;
}

//*************************************************
// Overloaded stream insertion operator (<<).     *
//*************************************************

ostream &operator<<(ostream &strm, const MyString &obj)
{
   strm << obj.str;
   return strm;
}

//*************************************************
// Overloaded stream extraction operator (>>).    *
//*************************************************

istream &operator>>(istream &strm, MyString &obj)
{
   strm.getline(obj.str, obj.len);
   strm.ignore();
   return strm;
}