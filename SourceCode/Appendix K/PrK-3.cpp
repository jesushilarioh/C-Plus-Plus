// This program uses the precision member function of a
// file stream object to format file output.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   fstream dataFile;
   double num = 123.456;

   // Open the file.
   dataFile.open("numfile.txt", ios::out);

   // Write a value at various digits of precision
   dataFile << num << endl;
   dataFile.precision(5);
   dataFile << num << endl;
   dataFile.precision(4);
   dataFile << num << endl;
   dataFile.precision(3);
   dataFile << num << endl;

   // Close the file.
   dataFile.close();
   return 0;
}