// This program demonstrates the dynamic stack
// class DynIntClass.
#include <iostream>
#include "DynIntStack.h"
using namespace std;

int main()
{
	int catchVar;	// To hold values popped off the stack

	// Create a DynIntStack object.
	DynIntStack stack;

	// Push 5, 10, and 15 onto the stack.
	cout << "Pushing 5\n";
	stack.push(5);
	cout << "Pushing 10\n";
	stack.push(10);
	cout << "Pushing 15\n";
	stack.push(15);

	// Pop the values off the stack and display them.
	cout << "Popping...\n";
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;

	// Try to pop another value off the stack.
	cout << "\nAttempting to pop again... ";
	stack.pop(catchVar);
	return 0;
}