// Specification file for the NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
   // Declare a structure for the list
   struct ListNode
   {
      double value;           // The value in this node
      struct ListNode *next;  // To point to the next node
   }; 

   ListNode *head;            // List head pointer

public:
   // Constructor
   NumberList()
      { head = nullptr; }
      
   // Destructor
   ~NumberList();
      
   // Linked list operations
   void appendNode(double);
   void insertNode(double);
   void deleteNode(double);
   void displayList() const;
};
#endif