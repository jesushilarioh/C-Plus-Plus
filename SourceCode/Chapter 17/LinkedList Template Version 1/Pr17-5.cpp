// This program demonstrates the linked list template.
#include <iostream>
#include "LinkedList.h"
#include "FeetInches.h"
using namespace std;

int main()
{
   // Define a LinkedList object.
   LinkedList<FeetInches> list;

   // Define some FeetInches objects.
   FeetInches distance1(5, 4); // 5 feet 4 inches
   FeetInches distance2(6, 8); // 6 feet 8 inches
   FeetInches distance3(8, 9); // 8 feet 9 inches

   // Store the FeetInches objects in the list.
   list.appendNode(distance1); // 5 feet 4 inches
   list.appendNode(distance2); // 6 feet 8 inches
   list.appendNode(distance3); // 8 feet 9 inches

   // Display the values in the list.
   cout << "Here are the initial values:\n";
   list.displayList();
   cout << endl;

   // Insert another FeetInches object.
   cout << "Now inserting the value 7 feet 2 inches.\n";
   FeetInches distance4(7, 2);
   list.insertNode(distance4);

   // Display the values in the list.
   cout << "Here are the nodes now.\n";
   list.displayList();
   cout << endl;

   // Delete the last node.
   cout << "Now deleting the last node.\n";
   FeetInches distance5(8, 9);
   list.deleteNode(distance5);

   // Display the values in the list.
   cout << "Here are the nodes left.\n";
   list.displayList();
   return 0;
}