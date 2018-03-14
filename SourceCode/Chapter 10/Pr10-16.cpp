// This program demonstrates how cin can read a string into
// a string class object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;

   cout << "What is your name? ";
   cin >> name;
   cout << "Good morning " << name << endl;
   return 0;
}