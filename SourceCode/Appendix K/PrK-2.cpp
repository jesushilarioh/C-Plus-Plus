// This program uses cin's width member function.
#include <iostream>
using namespace std;

int main()
{
   char word[5];

   cout << "Enter a word: ";
   cin.width(5);
   cin >> word;
   cout << "You entered " << word << endl;
   return 0;
}