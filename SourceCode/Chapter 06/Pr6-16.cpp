// This program shows that variables defined in a function
// are hidden from other functions.
#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype

int main()
{
   int num = 1;   // Local variable

   cout << "In main, num is " << num << endl;
   anotherFunction();
   cout << "Back in main, num is " << num << endl;
   return 0;
}

//*****************************************************
// Definition of anotherFunction                      *
// It has a local variable, num, whose initial value  *
// is displayed.                                      *
//*****************************************************

void anotherFunction()
{
   int num = 20;  // Local variable

   cout << "In anotherFunction, num is " << num << endl;
}