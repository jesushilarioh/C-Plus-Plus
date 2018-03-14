// Specification file for the IntArray class
#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
private:
   int *aptr;                     // Pointer to the array
   int arraySize;                 // Holds the array size
   void subscriptError();         // Handles invalid subscripts
public:
   IntArray(int);                 // Constructor
   IntArray(const IntArray &);    // Copy constructor
   ~IntArray();                   // Destructor
   
   int size() const               // Returns the array size
      { return arraySize; }

   int &operator[](const int &);  // Overloaded [] operator
};
#endif