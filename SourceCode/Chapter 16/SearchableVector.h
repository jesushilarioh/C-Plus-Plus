#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
   // Default constructor
   SearchableVector() : SimpleVector<T>()
      {}
   
   // Constructor
   SearchableVector(int size) : SimpleVector<T>(size)
      { }
   
   // Copy constructor
   SearchableVector(const SearchableVector &);

   // Accessor to find an item
   int findItem(const T);
};

//*******************************************************
// Copy constructor                                     *
//*******************************************************

template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj) :
                     SimpleVector<T>(obj.size())
{
   for(int count = 0; count < this->size(); count++)
      this->operator[](count) = obj[count];
}

//*******************************************************
// findItem function                                    *
// This function searches for item. If item is found    *
// the subscript is returned. Otherwise -1 is returned. *
//*******************************************************

template <class T>
int SearchableVector<T>::findItem(const T item)
{
   for (int count = 0; count <= this->size(); count++)
   {
      if (getElementAt(count) == item)
         return count;
   }
   return -1;
}
#endif