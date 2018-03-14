// This program demonstrates the BinaryTree class template.
// It builds a binary tree with 5 nodes.
#include <iostream>
#include "BinaryTree.h"
using namespace std;

const int NUM_NODES = 5;

int main()
{
   string name;
   
   // Create the binary tree.
   BinaryTree<string> tree;

   // Insert some names.
   for (int count = 0; count < NUM_NODES; count++)
   {
       cout << "Enter an name: ";
       getline(cin, name);
       tree.insertNode(name);
   }
    
   // Display the values.
   cout << "\nHere are the values in the tree:\n";
   tree.displayInOrder();
   return 0;
}