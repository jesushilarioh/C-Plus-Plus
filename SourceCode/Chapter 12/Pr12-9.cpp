// This file demonstrates the getline function with
// a specified delimiter.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string input;	// To hold file input
   
   // Open the file for input.
   fstream dataFile("names2.txt", ios::in);
   
   // If the file was successfully opened, continue.
   if (dataFile)
   {
       // Read an item using $ as a delimiter.
       getline(dataFile, input, '$');
       
       // While the last read operation 
       // was successful, continue.       
       while (dataFile)
       {
          // Display the last item read.
          cout << input << endl;
          
          // Read an item using $ as a delimiter.
          getline(dataFile, input, '$');
       }
       
       // Close the file.
       dataFile.close();
   }
   else
   {
      cout << "ERROR: Cannot open file.\n";
   }
   return 0;
}