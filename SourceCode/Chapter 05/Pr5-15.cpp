// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outputFile;
   outputFile.open("demofile.txt");

   cout << "Now writing data to the file.\n";

   // Write four names to the file.
   outputFile << "Bach\n";
   outputFile << "Beethoven\n";
   outputFile << "Mozart\n";
   outputFile << "Schubert\n";

   // Close the file
   outputFile.close();
   cout << "Done.\n";
   return 0;
}