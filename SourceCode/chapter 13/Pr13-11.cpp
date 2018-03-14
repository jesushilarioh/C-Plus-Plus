// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
public:
   Demo();     // Constructor
   ~Demo();    // Destructor
};

Demo::Demo()
{
   cout << "Welcome to the constructor!\n";
}

Demo::~Demo()
{
   cout << "The destructor is now running.\n";
}

//*********************************************
// Function main.                             *
//*********************************************

int main()
{
   Demo demoObject;  // Define a demo object;

   cout << "This program demonstrates an object\n";
   cout << "with a constructor and destructor.\n";
   return 0;
}