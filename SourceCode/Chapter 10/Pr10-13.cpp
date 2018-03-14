// This program uses the function nameSlice to cut the last
// name off of a string that contains the user's first and
// last names.
#include <iostream>
using namespace std;

void nameSlice(char []); // Function prototype

int main()
{
   const int SIZE = 41;  // Array size
   char name[SIZE];      // To hold the user's name

   cout << "Enter your first and last names, separated ";
   cout << "by a space:\n";
   cin.getline(name, SIZE);
   nameSlice(name);
   cout << "Your first name is: " << name << endl;
   return 0;
}

//**************************************************************
// Definition of function nameSlice. This function accepts a   *
// character array as its argument. It scans the array looking *
// for a space. When it finds one, it replaces it with a null  *
// terminator.                                                 *
//**************************************************************

void nameSlice(char userName[])
{
   int count = 0;  // Loop counter

   // Locate the first space, or the null terminator if there
   // are no spaces.
   while (userName[count] != ' ' && userName[count] != '\0')
      count++;

   // If a space was found, replace it with a null terminator.
   if (userName[count] == ' ')
      userName[count] = '\0';
}