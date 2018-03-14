#include <iostream>
#include "DynIntQueue.h"
using namespace std;

//********************************************
// The constructor creates an empty queue.   *
//********************************************

DynIntQueue::DynIntQueue()
{
   front = nullptr;
   rear = nullptr;
   numItems = 0;
}

//********************************************
// Destructor                                *
//********************************************

DynIntQueue::~DynIntQueue()
{
   clear();
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************

void DynIntQueue::enqueue(int num)
{
   QueueNode *newNode = nullptr;

   // Create a new node and store num there.
   newNode = new QueueNode;
   newNode->value = num;
   newNode->next = nullptr;

   // Adjust front and rear as necessary.
   if (isEmpty())
   {
      front = newNode;
      rear = newNode;
   }
   else
   {
      rear->next = newNode;
      rear = newNode;
   }

   // Update numItems.
   numItems++;
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************

void DynIntQueue::dequeue(int &num)
{
   QueueNode *temp = nullptr;

   if (isEmpty())
   {
      cout << "The queue is empty.\n";
   }
   else
   {
      // Save the front node value in num.
      num = front->value;

      // Remove the front node and delete it.
      temp = front;
      front = front->next;
      delete temp;

      // Update numItems.
      numItems--;
   }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************

bool DynIntQueue::isEmpty() const
{
    bool status;

    if (numItems > 0)
       status = false;
    else
       status = true;
    return status;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************

void DynIntQueue::clear()
{
    int value;   // Dummy variable for dequeue

    while(!isEmpty())
       dequeue(value);
}