#include <iostream>
using namespace std;
int main()
{
	// 1. What does the indirection operator do?
	// The indirection for a variable to be changed.
	// ANSWER: The indirection operator allows you to access and modify
	//         a variable that is being ointed to.


	// 2. Look at the following code.
	int x = 7;
	int *iptr = &x;
	// What will be displayed if you send the expression *iptr to cout?
	cout << "*iptr = " << *iptr << endl;	// value in x

	// What happens if you send the expression ptr to cout?
	cout << "iptr = " << iptr << endl;		// x variable address


	// 3. So far you have learned three different uses for the * operator
	// What are they?
	// a) multiplication operator
	// distance = speed * time;

	// b) indirection operator
	// *ptr = 100;

	// c) In the definition of a pointer variable
	// int *ptr = nullptr;


	// 4. What math operations are allowed on pointers?
	// ANSWER: addition/subtraction:
	// These operations are allowed:
	//	a). Increment and decrement of a pointer variable
	//	b). an integer may be added or subtracted from a pointer variable.
	//			operator used +, -, +=, -=
	// 	c). a pointer may be subtracted from another pointer.


	// 5. Assuming ptr is a pointer to an int, what happens when
	//		you add 4 to ptr?
	int number = 8;
	int *ptr = &number;
	cout << "ptr = " << ptr << endl;
	ptr += 4;
	cout << "ptr = " << ptr << endl;
	// ANSWER: Because ptr is a pointer to an integer, the compound
	// 			operator adds the size of 4 integers to ptr. (4 bytes)


	// 6. Look at the following array definition.
	int numbers[] = { 2, 4, 6, 8, 10 };
	// What will the following statement display?
	cout << *(numbers + 3) << endl; // 8. Subscript 3

	// 7. What is the purpose of the new operator?
	// ANSWER: the new operator allows you to create/request a new 
	//			portion of dynamically allocated memory.

	// 8. What happens when a program uses the new operator to allocate
	//		a block of memory, but the amount of requested memory isn't
	//		available? How do programs written with older compilers
	//		handle this?
	// ANSWER: (Program ends or crashes...?) When memory cannot be
	//			dynamically allocated, C++ throws an exception and
	//			and terminates the program. Throwing an exception
	//			means the program signals that an error has occurred.

	// 9. What is the purpose of the delete operator?
	// ANSWER: The delete operator is used to free up dynamically
	// alocated memory that has previously been assigned to a pointer.
	// (The delete operator is used to free memory that was allocated
	//	with new.)

	// 10. Under what circumstances can you successfull return a pointer
	// from a function?
	// ANSWER: 
	// You should return a pointer from a function only if it is:
	//	- A pointer to an item that was passed into the function as an 
	//		argument.
	// 	- A pointer to a dynamically allocated chunk of memory.

	// 11. What is the difference between a pointer to a constant and 
	//		a constant pointer?
	// ANSWER:
	// _ A pointer to const points to a constant item. The data that the
	//		pointer points to cannot change, but the pointer itself
	//		can change.
	// _ With a const pointer, it is the pointer itself that is constant.
	//		Once the pointer is initialized with a address, it cannot
	// 		point to anything else.

	// 12. What are two advantages of declaring a pointer parameter as
	//		as a constant pointer?
	// ANSWER: (This help prevent memory leaks?) 
	//		- It protects you from writing code in the function that
	//			accidentally changes the argument.
	//		- The function will be able to accept the addresses of
	//			both constant and nonconstant arguments.
	//

}