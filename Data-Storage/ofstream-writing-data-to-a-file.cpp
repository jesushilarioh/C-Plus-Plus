//*********************************************
//This program writes data to a file.
//
// By: JESUS HILARIO HERNANDEZ
// Last modified: October 8, 2016
//*********************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outputFile;
  outputFile.open("demofile.txt");

  cout << "Now writing data to the file.\n";

  // Write for names to the file.
  outputFile << "Bach\n";
  outputFile << "Beethoven\n";
  outputFile << "Chopin\n";
  outputFile << "Mozart\n";
  outputFile << "Brahms\n";

  // Close the file
  outputFile.close();
  cout << "Done.\n";
  return 0;
}
