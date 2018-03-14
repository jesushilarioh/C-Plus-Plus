// Specification file for the the IntegerList class.
#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList
{
private:
   int *list;                 // Pointer to the array.
   int numElements;           // Number of elements.
   bool isValid(int) const;   // Validates subscripts.
public:
   IntegerList(int);          // Constructor
   ~IntegerList();            // Destructor
   void setElement(int, int); // Sets an element to a value
   int getElement(int) const; // Returns an element
};
#endif