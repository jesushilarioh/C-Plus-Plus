// This program demonstrates the DynamicQueue template.
#include <iostream>
#include <string>
#include "DynamicQueue.h"
using namespace std;

const int QUEUE_SIZE = 5;

int main()
{
    string name;
    
    // Create a Queue.
    DynamicQueue<string> queue;
    
    // Enqueue some names.
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        cout << "Enter an name: ";
        getline(cin, name);
        queue.enqueue(name);
    }
    
    // Dequeue the names and display them.
    cout << "\nHere are the names you entered:\n";
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        queue.dequeue(name);
        cout << name << endl;
    }
    return 0;
}