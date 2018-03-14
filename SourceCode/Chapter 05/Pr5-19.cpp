// This program reads data from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream inputFile;
   string name;

   inputFile.open("Friends.txt");
   cout << "Reading data from the file.\n";
  
   inputFile >> name;      // Read name 1 from the file
   cout << name << endl;   // Display name 1
  
   inputFile >> name;      // Read name 2 from the file
   cout << name << endl;   // Display name 2
  
   inputFile >> name;      // Read name 3 from the file
   cout << name << endl;   // Display name 3

   inputFile.close();      // Close the file
   return 0;
} 