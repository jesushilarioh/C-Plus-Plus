// This program writes data to a file, closes the file,
// then reopens the file and appends more data.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream dataFile;

	cout << "Opening file...\n";
	// Open the file in output mode.
	dataFile.open("demofile.txt", ios::out);
	cout << "Now writing data to the file.\n";
	dataFile << "Jones\n";						// Write line 1
	dataFile << "Smith\n";						// Write line 2
	cout << "Now closing the file.\n";
	dataFile.close();							// Close the file

	cout << "Opening the file again...\n";
	// Open the file in append mode.
	dataFile.open("demofile.txt", ios::out | ios::app);
	cout << "Writing more data to the file.\n";
	dataFile << "Willis\n";						// Write line 3
	dataFile << "Davis\n";						// Write line 4
	cout << "Now closing the file.\n";
	dataFile.close();							// Close the file

	cout << "Done.\n";
	return 0;
}