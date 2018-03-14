// This program demonstrates how file stream objects may
// be passed by reference to functions.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
bool openFileIn(fstream &, string);
void showContents(fstream &);

int main()
{
	fstream dataFile;

	if (openFileIn(dataFile, "demofile.txt"))
	{
    	cout << "File opened successfully.\n";
    	cout << "Now reading data from the file.\n\n";
    	showContents(dataFile);
    	dataFile.close();
    	cout << "\nDone.\n";
	}	
	else
       cout << "File open error!" << endl;

	return 0;
}

//***********************************************************
// Definition of function openFileIn. Accepts a reference   *
// to an fstream object as an argument. The file is opened  *
// for input. The function returns true upon success, false *
// upon failure.                                            *
//***********************************************************

bool openFileIn(fstream &file, string name)
{
   file.open(name, ios::in);
   if (file.fail())
      return false;
   else
      return true;
}

//***********************************************************
// Definition of function showContents. Accepts an fstream  *
// reference as its argument. Uses a loop to read each name *
// from the file and displays it on the screen.             *
//***********************************************************

void showContents(fstream &file)
{
   string line;

   while (file >> line)
   {
      cout << line << endl;
   }
}