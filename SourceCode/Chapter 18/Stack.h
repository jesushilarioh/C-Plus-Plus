#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

// Stack template
template <class T>
class Stack
{
private:
   T *stackArray;
   int stackSize;
   int top;

public:
   //Constructor
   Stack(int);
   
   // Copy constructor
   Stack(const Stack&);
   
   // Destructor
   ~Stack();
   
   // Stack operations
   void push(T);
   void pop(T &);
   bool isFull();
   bool isEmpty();
};
   
//***************************************************
//  Constructor                                     *
//***************************************************

template <class T>
Stack<T>::Stack(int size)
{
   stackArray = new T[size]; 
   stackSize = size; 
   top = -1;
}

//***************************************************
//  Copy constructor                                *
//***************************************************

template <class T>
Stack<T>::Stack(const Stack &obj)
{
   // Create the stack array.
   if (obj.stackSize > 0)
      stackArray = new T[obj.stackSize];
   else
      stackArray = nullptr;
      
   // Copy the stackSize attribute.
   stackSize = obj.stackSize;
   
   // Copy the stack contents.
   for (int count = 0; count < stackSize; count++)
      stackArray[count] = obj.stackArray[count];
      
   // Set the top of the stack.
   top = obj.top;
}

//***************************************************
//  Destructor                                      *
//***************************************************

template <class T>
Stack<T>::~Stack()
{
   if (stackSize > 0)
      delete [] stackArray;
}

//*************************************************************
// Member function push pushes the argument onto              *
// the stack.                                                 *
//*************************************************************

template <class T>
void Stack<T>::push(T item)
{
   if (isFull())
   {
      cout << "The stack is full.\n";
   }
   else
   {
      top++;
      stackArray[top] = item;
   }
}
 
//*************************************************************
// Member function pop pops the value at the top              *
// of the stack off, and copies it into the variable          *
// passed as an argument.                                     *
//*************************************************************

template <class T>
void Stack<T>::pop(T &item)
{
   if (isEmpty())
   {
      cout << "The stack is empty.\n";
   }
   else
   {
      item = stackArray[top];
      top--;
   }
}

//*************************************************************
// Member function isFull returns true if the stack           *
// is full, or false otherwise.                               *
//*************************************************************

template <class T>
bool Stack<T>::isFull()
{
   bool status;
   
   if (top == stackSize - 1)
      status = true;
   else 
      status = false;
   
   return status;
}

//*************************************************************
// Member function isEmpty returns true if the stack          *
// is empty, or false otherwise.                              *
//*************************************************************

template <class T>
bool Stack<T>::isEmpty()
{
   bool status;
   
   if (top == -1)
      status = true;
   else 
      status = false;
   
   return status;
}
#endif