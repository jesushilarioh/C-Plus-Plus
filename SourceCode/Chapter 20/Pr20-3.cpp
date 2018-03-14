// This program builds a binary tree with 5 nodes.
// The SearchNode function is demonstrated.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
   IntBinaryTree tree;

   // Insert some nodes in the tree.
   cout << "Inserting nodes.\n";
   tree.insertNode(5);
   tree.insertNode(8);
   tree.insertNode(3);
   tree.insertNode(12);
   tree.insertNode(9);

   // Search for the value 3.
   if (tree.searchNode(3))
      cout << "3 is found in the tree.\n";
   else
      cout << "3 was not found in the tree.\n";

   // Search for the value 100.
   if (tree.searchNode(100))
      cout << "100 is found in the tree.\n";
   else
      cout << "100 was not found in the tree.\n";
   return 0;
}