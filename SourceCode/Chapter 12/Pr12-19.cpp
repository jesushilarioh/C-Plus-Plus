// This program demonstrates the tellg function.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	long offset;	// To hold an offset amount
	long numBytes;	// To hold the file size
	char ch;		// To hold a character
	char again;		// To hold Y or N

	// Open the file for input.
	fstream file("letters.txt", ios::in);

	// Determine the number of bytes in the file.
	file.seekg(0L, ios::end);
	numBytes = file.tellg();
	cout << "The file has " << numBytes << " bytes.\n";

	// Go back to the beginning of the file.
	file.seekg(0L, ios::beg);

	// Let the user move around within the file.
	do
	{
		// Display the current read position.
		cout << "Currently at position " << file.tellg() << endl;

		// Get a byte number from the user.
		cout << "Enter an offset from the beginning of the file: ";
		cin >> offset;

		// Move the read position to that byte, read the
		// character there, and display it.
		if (offset >= numBytes)	// Past the end of the file?
			cout << "Cannot read past the end of the file.\n";
		else
		{
			file.seekg(offset, ios::beg);
			file.get(ch);
			cout << "Character read: " << ch << endl;
		}

		// Does the user want to try this again?
		cout << "Do it again? ";
		cin >> again;
	} while (again == 'Y' || again == 'y');

	// Close the file.
	file.close();
	return 0;
}