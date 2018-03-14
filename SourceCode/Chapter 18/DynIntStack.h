// Specification file for the DynIntStack class
#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
private:
   // Structure for stack nodes
   struct StackNode
   {
      int value;        // Value in the node
      StackNode *next;  // Pointer to the next node
   };

   StackNode *top;      // Pointer to the stack top

public:
   // Constructor
   DynIntStack()
      {  top = nullptr; }

   // Destructor
   ~DynIntStack();

   // Stack operations
   void push(int);
   void pop(int &);
   bool isEmpty();
}; 
#endif