// This program builds a binary tree with 5 nodes.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
   IntBinaryTree tree;

   cout << "Inserting nodes. ";
   tree.insertNode(5);
   tree.insertNode(8);
   tree.insertNode(3);
   tree.insertNode(12);
   tree.insertNode(9);
   cout << "Done.\n";

   return 0;
}