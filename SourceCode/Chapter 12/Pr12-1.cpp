// This program uses an fstream object to write data to a file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream dataFile;

	cout << "Opening file...\n";
	dataFile.open("demofile.txt", ios::out);	// Open for output
	cout << "Now writing data to the file.\n";
	dataFile << "Jones\n";						// Write line 1
	dataFile << "Smith\n";						// Write line 2
	dataFile << "Willis\n";						// Write line 3
	dataFile << "Davis\n";						// Write line 4
	dataFile.close();							// Close the file
	cout << "Done.\n";
	return 0;
}