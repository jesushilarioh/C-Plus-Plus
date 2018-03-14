// This program demonstrates a constructor.
#include <iostream>
using namespace std;

// Demo class declaration.

class Demo
{
public:
   Demo();     // Constructor
};

Demo::Demo()
{
   cout << "Welcome to the constructor!\n";
}

//*****************************************
// Function main.                         *
//*****************************************

int main()
{
   Demo demoObject;  // Define a Demo object;

   cout << "This program demonstrates an object\n";
   cout << "with a constructor.\n";
   return 0;
} 