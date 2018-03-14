// Implementation file for the IntArray class
#include <iostream>
#include <cstdlib>   // For the exit function
#include "IntArray.h"
using namespace std;

//*******************************************************
// Constructor for IntArray class. Sets the size of the *
// array and allocates memory for it.                   *
//*******************************************************

IntArray::IntArray(int s)
{
   arraySize = s;
   aptr = new int [s];
   for (int count = 0; count < arraySize; count++)
      *(aptr + count) = 0;
}

//******************************************************
// Copy Constructor for IntArray class.                *
//******************************************************

IntArray::IntArray(const IntArray &obj)
{
   arraySize = obj.arraySize;
   aptr = new int [arraySize];
   for(int count = 0; count < arraySize; count++)
      *(aptr + count) = *(obj.aptr + count);
}

//******************************************************
// Destructor for IntArray class.                      *
//******************************************************

IntArray::~IntArray()
{
   if (arraySize > 0)
      delete [] aptr;
}

//***********************************************************
// subscriptError function. Displays an error message and   *
// terminates the program when a subscript is out of range. *
//***********************************************************

void IntArray::subscriptError()
{
   cout << "ERROR: Subscript out of range.\n";
   exit(0);
}

//*******************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element     *
// in the array indexed by the subscript.               *
//*******************************************************

int &IntArray::operator[](const int &sub)
{
   if (sub < 0 || sub >= arraySize)
      subscriptError();
   return aptr[sub];
}